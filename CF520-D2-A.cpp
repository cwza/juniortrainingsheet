#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n;
string s;
bool check[26];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    cin >> s;
    int cnt = 0;
    for(char ch : s) {
        ch = tolower(ch);
        if(!check[ch-'a']) {
            check[ch-'a'] = true;
            cnt++;
        }
    }
    if(cnt>=26) cout << "YES";
    else cout << "NO";
}