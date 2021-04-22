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
    int cntA = 0, cntD = 0;
    for(char ch : s) {
        if(ch=='A') cntA++;
        else cntD++;
    }
    if(cntA>cntD) cout << "Anton";
    else if(cntD>cntA) cout << "Danik";
    else cout << "Friendship";
}