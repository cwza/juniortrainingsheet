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
    int first_l = -1, last_l = -1, first_r = -1, last_r = -1;
    for(int i = 0; i < n; ++i) {
        if(s[i]=='L') {
            if(first_l==-1) first_l = i;
            last_l = i;
        } 
        if(s[i]=='R') {
            if(first_r==-1) first_r = i;
            last_r = i;
        }
    }
    if(first_l == -1) {
        cout << first_r+1 << " " << last_r+2;
        return 0;
    }
    if(first_r == -1) {
        cout << last_l+1 << " " << first_l;
        return 0;
    }
    cout << first_r+1 << " " << last_r+1;
}