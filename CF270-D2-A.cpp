#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int t;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> t;
    while(t--) {
        int a;
        cin >> a;
        if(360%(180-a)==0) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}