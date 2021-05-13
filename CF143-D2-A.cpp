#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int r1, r2, c1, c2, d1, d2;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;
    for(int i = 1; i <= 9; ++i) {
        for(int j = 1; j <= 9; ++j) {
            for(int k = 1; k <= 9; ++k) {
                for(int l = 1; l <= 9; ++l) {
                    if(i+j==r1 && k+l==r2 && i+k==c1 && j+l==c2 && i+l==d1 && j+k==d2) {
                        set<int> s;
                        s.insert(i); s.insert(j); s.insert(k); s.insert(l);
                        if(s.size()==4) {
                            cout << i << " " << j << "\n";
                            cout << k << " " << l;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << -1;
}