#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n;
map<string, int> mp = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    int ans = 0;
    while(n--) {
        string s;
        cin >> s;
        ans += mp[s];
    }
    cout << ans;
}