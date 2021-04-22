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
    vector<int> as(n);
    for(int i = 0; i < n; ++i) {
        cin >> as[i];
    }
    sort(as.begin(), as.end());
    for(int i = 0; i < n; ++i) cout << as[i] << " ";
}