#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> s;
    int ans = 0;
    char prev = 'a';
    for(char ch : s) {
        int smaller = min(ch, prev);
        int larger = max(ch, prev);
        ans += min(larger-smaller, smaller+26-larger);
        prev = ch;
    }
    cout << ans;
}