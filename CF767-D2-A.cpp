#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n;
vector<ar<int, 2>> inp; // (size, id)

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    inp.resize(n);
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        inp[i] = {a, i};
    }
    sort(inp.begin(), inp.end(), greater<ar<int, 2>>());
    vector<vector<int>> ans(n);
    int now = -1;
    for(int i = 0; i < n; ++i) {
        if(inp[i][1] > now) now = inp[i][1];
        ans[now].push_back(inp[i][0]);
    }
    for(int i = 0; i < n; ++i) {
        for(int a : ans[i]) cout << a << " ";
        cout << "\n";
    }
}