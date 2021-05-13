#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

string s1, s2;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> s1;
    cin >> s2;
    if(s1 == s2) cout << "-1";
    else cout << max(s1.size(), s2.size());
}