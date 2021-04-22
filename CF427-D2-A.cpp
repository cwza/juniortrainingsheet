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
    int cnt = 0, ans = 0;
    while(n--) {
        int a;
        cin >> a;
        if(a == -1) {
            if(cnt <= 0) ans++;
            else cnt--;
        } else {
            cnt += a;
        }
    }
    cout << ans;
}