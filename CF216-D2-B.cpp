#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

/*
Bench count will plus one if we have a connected component that form a cycle and has odds numbers of node in it and greater than 1.
*/

const int maxN = 100;
int n, m;
vector<int> adj[maxN];
bool vis[maxN], act[maxN];

void dfs(int u, int p, int &cnt, bool &hasCycle) {
    cnt++;
    vis[u] = true;
    act[u] = true;
    for(int v : adj[u]) {
        if(v==p) continue;
        if(act[v]) hasCycle = true;
        if(!vis[v]) dfs(v, u, cnt, hasCycle);
    }
    act[u] = false;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> m;
    for(int i = 0, u, v; i < m; ++i) {
        cin >> u >> v; u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int ans = 0;
    for(int u = 0; u < n; ++u) {
        int cnt = 0;
        bool hasCycle = false;
        if(!vis[u]) {
            dfs(u, -1, cnt, hasCycle);
            if(hasCycle && (cnt>1 && cnt%2==1)) {
                ans++;
            }
        }
    }
    if((n-ans)%2==0) cout << ans;
    else cout << ans+1;
}