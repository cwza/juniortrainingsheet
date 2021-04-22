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
    for(int i = 0; i < n; ++i) {
        cout << (char)((i%k)+'a');
    }
}