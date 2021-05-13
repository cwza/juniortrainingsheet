#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

const int maxN = 1e5;
int n, k;
vector<int> adj[maxN];
bool vis[maxN];
vector<int> topo;

void dfs(int u) {
    vis[u] = true;
    for(int v : adj[u]) {
        if(!vis[v]) {
            dfs(v);
        }
    }
    topo.push_back(u);
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> k;
    for(int v = 0, w; v < k; ++v) {
        cin >> w;
        for(int j = 0, u; j < w; ++j) {
            cin >> u; u--;
            adj[u].push_back(v);
        }
    }
    for(int u = 0; u < n; ++u) {
        if(!vis[u]) {
            dfs(u);
        }
    }

    int parent[n];
    int p = -1;
    for(int a : topo) {
        parent[a] = p;
        p = a;
    }
    for(int i = 0; i < n; ++i) cout << parent[i]+1 << "\n";
}