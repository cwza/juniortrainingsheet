#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> s;
    int n = s.size();
    int ans = ceil((double)n/2);
    bool ch = true;
    for(int i = 1; i < n; ++i) {
        if(s[i]=='1') {
            ch = false;
            break;
        }
    }
    if(ch && n%2==1) cout << ans-1;
    else cout << ans;
}