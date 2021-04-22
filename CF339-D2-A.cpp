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
    vector<char> inp;
    for(char ch : s) {
        if(ch!='+') inp.push_back(ch);
    }
    sort(inp.begin(), inp.end());
    for(int i = 0; i < inp.size(); ++i) {
        cout << inp[i];
        if(i!=inp.size()-1) cout << "+";
    }
}