#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n;
string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    cin >> s;
    char prev = 0;
    int ans = 0;
    for(char ch : s) {
        if(ch==prev) {
            ans++;
        }
        prev = ch;
    }
    cout << ans;
}