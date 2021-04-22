#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, b, d;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> b >> d;
    int s = 0, ans = 0;
    while(n--) {
        int a;
        cin >> a;
        if(a > b) continue;
        s += a;
        if(s > d) {
            ans++;
            s = 0;
        }
    }
    cout << ans;
}