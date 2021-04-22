#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

ll a, b;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> a >> b;
    int ans = 0;
    while(a <= b) {
        a = a * 3;
        b = b * 2;
        ans++;
    }
    cout << ans;
}