#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

/*
if t != 10:
    the answer is just like: t00000
if t == 10:
    the answer is just like: 111110
*/

int n, t;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> t;
    if(t!=10) {
        cout << t;
        for(int i = 1; i <= n-1; ++i) cout << "0";
    } else {
        if(n==1) {
            cout << -1;
            return 0;
        }
        for(int i = 1; i <= n-1; ++i) cout << "1";
        cout << "0";
    }
}