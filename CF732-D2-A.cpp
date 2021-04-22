#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

ll k, r;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> k >> r;

    for(int i = 1; i <= 10; ++i) {
        int x = k * i;
        if(x%10==0 || x%10==r) {
            cout << i;
            return 0;
        }
    }
}