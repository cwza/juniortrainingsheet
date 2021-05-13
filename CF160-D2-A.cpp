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
    int s = 0;
    for(int i = 0; i < n; ++i) {
        cin >> inp[i];
        s += inp[i];
    }
    int target = s/2;
    sort(inp.begin(), inp.end(), greater<int>());

    int ans = 0;
    int cur = 0;
    for(int a : inp) {
        if(cur > target) break;
        cur += a;
        ans++;
    }
    cout << ans;
}