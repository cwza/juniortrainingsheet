#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

ll l, r;

ll gcd(ll x, ll y) {
    if(y==0) return x;
    return gcd(y, x%y);
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> l >> r;
    for(ll a = l; a <= r-2; ++a) {
        for(ll b = a+1; b <= r-1; ++b) {
            for(ll c = b+1; c <= r; ++c) {
                if(gcd(a, b)==1 && gcd(b, c)==1 && gcd(a, c)!=1) {
                    cout << a << " " << b << " " << c;
                    return 0;
                }
            }
        }
    }
    cout << -1;
}