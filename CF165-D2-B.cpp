#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, k;

bool g(int v) {
    int x = 0;
    while(v) {
        x += v;
        v /= k;
    }
    return x >= n;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);

    cin >> n >> k;
    int l = 1, r = n+1;
    while(l < r) {
        int mid = l + (r-l)/2;
        if(g(mid)) r = mid;
        else l = mid+1;
    }
    cout << l;
}