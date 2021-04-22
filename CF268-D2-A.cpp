#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n;
vector<ar<int, 2>> inp;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    inp.resize(n);
    for(int i = 0, a, b; i < n; ++i) {
        cin >> a >> b;
        inp[i] = {a, b};
    }

    int ans = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i==j) continue;
            if(inp[i][0]==inp[j][1]) ans++;
        }
    }
    cout << ans;
}