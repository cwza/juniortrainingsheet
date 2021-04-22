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
    cin >> s1 >> s2;
    int i = 0;
    for(char ch : s2) {
        if(ch==s1[i]) i++;
    }
    cout << i+1;
}