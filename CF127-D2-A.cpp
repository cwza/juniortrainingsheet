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
    int ax, ay, bx, by;
    double l = 0;
    for(int i = 0; i < n; ++i) {
        cin >> bx >> by;
        if(i==0) {
            ax = bx;
            ay = by;
        }
        l += sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
        ax = bx;
        ay = by;
    }
    cout << setprecision(10) << l/50*k;
}