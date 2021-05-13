#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

const int maxN = 100;
int n, m;
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
    while(cin >> n >> m) {
        fill(adj, adj+maxN, vector<int>());
        fill(vis, vis+maxN, false);
        topo = vector<int>();
        for(int i = 0, u, v; i < m; ++i) {
            cin >> v >> u; u--; v--;
            adj[u].push_back(v);
        }
        for(int u = 0; u < n; ++u) {
            if(!vis[u]) {
                dfs(u);
            }
        }
        for(int a : topo) cout << a+1 << " ";
        cout << "\n";
    }
}