#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array



int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    int ma[4];
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    ma[0] = a, ma[1] = b, ma[2] = c, ma[3] = d;
    string s;
    cin >> s;
    ll ans = 0;
    for(char ch : s) {
        ans += ma[ch-'1'];
    }
    cout << ans;
}