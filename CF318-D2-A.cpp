#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

ll n, k;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> k;
    ll split = (n+1)/2 + 1;
    if(k<split) cout << 1+2*(k-1);
    else cout << 2+2*(k-split);
}