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
    bool all_same = true;
    bool decrease = true;
    int preva = 4500;
    while(n--) {
        int a, b;
        cin >> a >> b;
        if(a!=b) {
            all_same = false;
            break;
        }
        if(a>preva) {
            decrease = false;
        }
        preva = a;
    }
    if(!all_same) cout << "rated";
    else if(decrease) cout << "maybe";
    else cout << "unrated";
}