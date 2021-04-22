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
    int cnt1 = 0, cnt2 = 0;
    for(char ch : s) {
        if(islower(ch)) cnt1++;
        else cnt2++;
    }
    string ans;
    if(cnt1 >= cnt2) {
        for(char ch : s) {
            ans += tolower(ch);
        }
    } else {
        for(char ch : s) ans += toupper(ch);
    }
    cout << ans;
}