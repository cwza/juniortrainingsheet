#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

string xx;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> xx;
    int n = xx.size();
    for(int i = 0; i < n; ++i) {
        if(i==0 && xx[i]=='9') continue;
        if(xx[i]>'4') xx[i] = '0'+'9'-xx[i];
    }
    cout << xx;
}