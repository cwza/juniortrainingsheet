#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, p, q;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    cin >> p;
    set<int> s;
    while(p--) {
        int a;
        cin >> a;
        s.insert(a);
    }
    cin >> q;
    while(q--) {
        int a;
        cin >> a;
        s.insert(a);
    }
    if(s.size()==n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}