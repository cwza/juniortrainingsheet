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
    int n = s1.size();
    for(int i = 0; i < n; ++i) {
        char a = tolower(s1[i]);
        char b = tolower(s2[i]);
        if(a < b) {
            cout << "-1";
            return 0;
        } else if(a > b) {
            cout << "1";
            return 0;
        }
    }
    cout << "0";
}