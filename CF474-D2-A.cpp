#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

string keys[3] = {
    "qwertyuiop",
    "asdfghjkl;",
    "zxcvbnm,./",
};
char dir;
string s;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> dir;
    cin >> s;
    map<char, ar<int, 2>> mp;
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 10; ++j) {
            mp[keys[i][j]] = {i, j};
        }
    }

    for(char ch : s) {
        int i = mp[ch][0], j = mp[ch][1];
        if(dir=='R') cout << keys[i][j-1];
        else cout << keys[i][j+1];
    }
}