#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

string grid[4];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    for(int i = 0; i < 4; ++i) cin >> grid[i];
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            int cnt = 0;
            if(grid[i][j]=='#') cnt++;
            if(grid[i][j+1]=='#') cnt++;
            if(grid[i+1][j]=='#') cnt++;
            if(grid[i+1][j+1]=='#') cnt++;
            if(cnt==1 || cnt==3 || cnt==0 || cnt==4) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}