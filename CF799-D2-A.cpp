#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, t, k, d;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> t >> k >> d;
    int t1 = ceil((double)n/k) * t;
    if(d+t >= t1) cout << "NO";
    else cout << "YES";
}