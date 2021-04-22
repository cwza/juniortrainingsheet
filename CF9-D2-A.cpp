#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int a, b;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> a >> b;
    int x = 6 - max(a, b) + 1;
    if(x==1) cout << "1/6";
    if(x==2) cout << "1/3";
    if(x==3) cout << "1/2";
    if(x==4) cout << "2/3";
    if(x==5) cout << "5/6";
    if(x==6) cout << "1/1";
}