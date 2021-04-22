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
    vector<int> inp(n);
    for(int i = 0; i < n; ++i) {
        cin >> inp[i];
    }

    int i = 0, j = n-1;
    int ans1 = 0, ans2 = 0;
    bool turn = true;
    while(i<=j) {
        if(inp[i] >= inp[j]) {
            if(turn) ans1 += inp[i];
            else ans2 += inp[i];
            i++;
        } else {
            if(turn) ans1 += inp[j];
            else ans2 += inp[j];
            j--;
        }
        turn = !turn;
    }
    cout << ans1 << " " << ans2;
}