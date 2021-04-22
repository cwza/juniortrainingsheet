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
    int ans = 0;
    while(n--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b+c>=2) ans++;
    }
    cout << ans;
}