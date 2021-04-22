#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array



int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            int a;
            cin >> a;
            if(a==1) {
                cout << abs(i-2)+abs(j-2);
                return 0;
            }
        }
    }
}