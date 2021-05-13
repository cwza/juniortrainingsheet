#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

ll n, m, a;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> m >> a;
    cout << (ll)ceil((double)n/a)*(ll)ceil((double)m/a);
}