#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, m;
vector<int> inp;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    inp.resize(n);
    for(int i = 0; i < n; ++i) {
        cin >> inp[i];
    }

    cin >> m;
    while(m--) {
        int x, y;
        cin >> x >> y; x--;
        if(x==0) {
            inp[x+1] += inp[x]-y;
        } else if(x==n-1) {
            inp[x-1] += y-1;
        } else {
            inp[x-1] += y-1; 
            inp[x+1] += inp[x]-y;
        }
        inp[x] = 0;
    }
    for(int a : inp) cout << a << "\n";
}