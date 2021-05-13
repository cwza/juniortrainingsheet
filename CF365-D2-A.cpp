#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, k;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> k;
    int ans = 0;
    while(n--) {
        string a;
        cin >> a;
        set<char> s = set<char>();
        for(char b : a) s.insert(b);
        bool ch = true;
        for(int i = 0; i <= k; ++i) {
            if(!s.count(i+'0')) {
                ch = false;
                break;
            }
        }
        if(ch) ans++;
    }
    cout << ans;
}