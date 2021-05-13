#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, x;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    cin >> x;
    while(n--) {
        int a, b;
        cin >> a >> b;
        if(a==x || a==7-x || b==x || b==7-x) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}