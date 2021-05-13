#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, k;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> k;
    int x = 0;
    while(n--) {
        int l, r;
        cin >> l >> r;
        x += r-l+1;
    }
    cout << (k-x%k)%k;
}