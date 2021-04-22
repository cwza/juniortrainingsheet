#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

ll n, x;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> x;
    int ans = 0;
    while(n--) {
        char qt;
        int val;
        cin >> qt >> val;
        if(qt=='+') {
            x += val;
        } else {
            if(val > x) ans++;
            else x -= val;
        }
    }
    cout << x << " " << ans;
}