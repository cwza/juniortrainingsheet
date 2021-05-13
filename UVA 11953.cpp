#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

const int maxN = 100;
int nt, n;
string field[maxN];

bool is_valid(int x, int y) {
    return x>=0 && x<n && y>=0 && y<n;
}

void dfs(int x, int y) {
    field[x][y] = '.';
    int xs[4] = {1, -1, 0, 0};
    int ys[4] = {0, 0, 1, -1};
    for(int i = 0; i < 4; ++i) {
        int nextX = x + xs[i];
        int nextY = y + ys[i];
        if(is_valid(nextX, nextY) && field[nextX][nextY]!='.') {
            dfs(nextX, nextY);
        }
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> nt;
    int ct = 0;
    while(nt--) {
        ct++;
        cin >> n;
        for(int i = 0; i < n; ++i) cin >> field[i];
        int ans = 0;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                if(field[i][j]=='x') {
                    ans++;
                    dfs(i, j);
                }
            }
        }
        cout << "Case " << ct << ": " << ans << "\n";
    }
}