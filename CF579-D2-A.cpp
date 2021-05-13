#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int x;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> x;
    // cout << __builtin_popcount(x); // number of 1's in bits representation of x
    int ans = 0;
    for(int i = 0; i < 30; ++i) {
        if(x & 1<<i) ans++;
    }
    cout << ans;
}