#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n;
vector<int> mp[4];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    for(int i = 1, a; i <= n; ++i) {
        cin >> a;
        mp[a].push_back(i);
    }

    int w = min({mp[1].size(), mp[2].size(), mp[3].size()});
    cout << w << "\n";
    for(int i = 1; i <= w; ++i) {
        cout << mp[1].back() << " " << mp[2].back() << " " << mp[3].back() << "\n";
        mp[1].pop_back(); mp[2].pop_back(); mp[3].pop_back();
    }
}