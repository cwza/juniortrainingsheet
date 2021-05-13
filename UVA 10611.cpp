#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, q;
vector<int> inp;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    inp.resize(n);
    for(int i = 0; i < n; ++i) cin >> inp[i];
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        auto iter = lower_bound(inp.begin(), inp.end(), x);
        if(iter==inp.begin()) cout << "X";
        else cout << *(--iter);
        cout << " ";
        iter = upper_bound(inp.begin(), inp.end(), x);
        if(iter==inp.end()) cout << "X";
        else cout << *iter;
        cout << "\n";
    }
}