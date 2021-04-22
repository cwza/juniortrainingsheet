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
    string prev = "";
    int ans = 0;
    while(n--) {
        string s;
        cin >> s;
        if(s != prev) {
            ans++;
            prev = s;
        }
    }
    cout << ans;
}