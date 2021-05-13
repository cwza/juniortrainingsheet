#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

ll n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    if(n%2==0) cout << n/2;
    else cout << (n-1)/2 - n;
}