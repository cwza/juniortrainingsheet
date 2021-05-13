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
    for(int i = 0; i < n; ++i) cin >> inp[i];


    for(int i = 0; i < n; ++i) {
        int ans1, ans2;
        if(i==0) {
            ans1 = inp[i+1]-inp[i];
            ans2 = inp[n-1]-inp[i];
        } else if(i==n-1) {
            ans1 = inp[i]-inp[i-1];
            ans2 = inp[i]-inp[0];
        } else {
            ans1 = min(inp[i]-inp[i-1], inp[i+1]-inp[i]);
            ans2 = max(inp[n-1]-inp[i], inp[i]-inp[0]);
        }
        cout << ans1 << " " << ans2 << "\n";
    }
}