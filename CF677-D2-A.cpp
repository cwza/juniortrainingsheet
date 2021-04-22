#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, h;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> h;
    int ans = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        if(a <= h) ans++;
        else ans += 2;
    }
    cout << ans;
}