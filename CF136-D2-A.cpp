#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    vector<int> mp(n+1);
    for(int i = 1, a; i <= n; ++i) {
        cin >> a;
        mp[a] = i;
    }
    for(int i = 1; i <= n; ++i) cout << mp[i] << " "; 
}