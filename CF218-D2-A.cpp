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
    vector<int> inp(2*n+1);
    for(int i = 0; i < 2*n+1; ++i) cin >> inp[i];
    for(int i = 1; i < 2*n; ++i) {
        if(i%2==1 && k>0 && inp[i-1]<inp[i]-1 && inp[i]-1>inp[i+1]) {
            inp[i] -= 1;
            k--;
        }     
    }
    for(int a : inp) cout << a << " ";
}