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
    bool is_floor = true;
    while(n--) {
        int a;
        cin >> a;
        if(a%2==0) cout << a/2;
        else {
            if(is_floor) cout << (int)floor((double)a/2);
            else cout << (int)ceil((double)a/2);
            is_floor = !is_floor;
        }
        cout << "\n";
    }
}