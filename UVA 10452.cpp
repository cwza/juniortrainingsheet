#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

const int maxM = 8, maxN = maxM;
int nt, m, n;
int sx, sy;
string grid[maxM];
bool vis[maxM][maxN];
vector<string> ans;

bool is_valid(int x, int y) {
    return (x>=0 && x<m && y>=0 && y<n) && (grid[x][y]=='I' || grid[x][y]=='E' || grid[x][y]=='H' || grid[x][y]=='O' || grid[x][y]=='V' || grid[x][y]=='A' || grid[x][y]=='#');
}

void dfs(int x, int y) {
    if(grid[x][y]=='#') return;
    vis[x][y] = true;
    int xs[3] = {0, 0, -1};
    int ys[3] = {-1, 1, 0};
    for(int i = 0; i < 3; ++i) {
        int nextX = x + xs[i];
        int nextY = y + ys[i];
        if(is_valid(nextX, nextY) && !vis[nextX][nextY]) {
            if(i==0) ans.push_back("left");
            else if(i==1) ans.push_back("right");
            else if(i==2) ans.push_back("forth");
            return dfs(nextX, nextY);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> nt;
    while(nt--) {
        cin >> m >> n;
        fill(&vis[0][0], &vis[0][0]+maxM*maxN, false);
        ans = vector<string>();
        for(int i = 0; i < m; ++i) {
            cin >> grid[i];
            for(int j = 0; j < n; ++j) {
                if(grid[i][j]=='@') {
                    sx = i;
                    sy = j;
                }             
            }
        }
        dfs(sx, sy);
        for(int i = 0; i < ans.size(); ++i) {
            if(i==ans.size()-1) cout << ans[i];
            else cout << ans[i] << " ";
        }
        cout << "\n";
    }
}