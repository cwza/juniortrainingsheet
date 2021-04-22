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
    while(n--) {
        string s;
        cin >> s;
        if(s.size()<=10) {
            cout << s;
        } else {
            cout << s[0] << s.size()-2 << s[s.size()-1];
        }
        cout << "\n";
    }
}