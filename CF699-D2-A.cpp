#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n;
string dirs;
vector<int> ps;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    cin >> dirs;
    ps.resize(n);
    for(int i = 0; i < n; ++i) cin >> ps[i];

    int ans = 1e9+1;
    for(int i = 0; i < n-1; ++i) {
        if(dirs[i]=='R' && dirs[i+1]=='L') {
            ans = min(ans, (ps[i+1]-ps[i])/2);
        }
    }
    if(ans==1e9+1) cout << -1;
    else cout << ans;
}