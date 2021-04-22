#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

string s;
bool check[26];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(check[s[i]-'a']) continue;
        cnt++;
        check[s[i]-'a'] = true;
    }
    if(cnt%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}