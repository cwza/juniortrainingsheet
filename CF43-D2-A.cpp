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
    map<string, int> mp;
    while(n--) {
        string name;
        cin >> name;
        mp[name]++;
    }
    string ans;
    int maxs = 0;
    for(auto[k, v] : mp) {
        if(v>=maxs) {
            ans = k;
            maxs = v;
        }
    }
    cout << ans;
}