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
    getline(cin, s);
    set<char> st;
    for(char ch : s) {
        if(isalpha(ch)) {
            st.insert(ch);
        }
    }
    cout << st.size();
}