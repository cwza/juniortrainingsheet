#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n;
vector<int> inp;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    inp.resize(n);
    int minv = 1e9+1, maxv = -1;
    for(int i = 0; i < n; ++i) {
        cin >> inp[i];
        minv = min(minv, inp[i]);
        maxv = max(maxv, inp[i]);
    }

    int ans = 0;
    for(int a : inp) {
        if(a!=minv && a!=maxv) ans++;
    }
    cout << ans;
}