#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, m;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            char c;
            cin >> c;
            if(c!='B' && c!='W' && c!='G') {
                cout << "#Color";
                return 0;
            }
        }
    }
    cout << "#Black&White";
}