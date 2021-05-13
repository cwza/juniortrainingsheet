#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

const int maxN = 25;
int n;
string field[maxN];
// bool vis[maxN][maxN];

bool is_valid(int x, int y) {
    return x>=0 && x<n && y>=0 && y<n;
}

void dfs(int x, int y) {
    field[x][y] = '0';
    int xs[8] = {1, -1, 0, 0, 1, 1, -1, -1};
    int ys[8] = {0, 0, 1, -1, 1, -1, 1, -1};
    for(int i = 0; i < 8; ++i) {
        int nextX = x + xs[i];
        int nextY = y + ys[i];
        if(is_valid(nextX, nextY) && field[nextX][nextY]=='1') {
            dfs(nextX, nextY);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    int tc = 0;
    while(cin >> n) {
        tc++;
        for(int i = 0; i < n; ++i) cin >> field[i];
        // fill(&vis[0][0], &vis[0][0]+maxN*maxN, false);
        int ans = 0;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                if(field[i][j]=='1') {
                    ans++;
                    dfs(i, j);
                }
            }
        }
        cout << "Image number " << tc << " contains " << ans << " war eagles.\n";
    }
}