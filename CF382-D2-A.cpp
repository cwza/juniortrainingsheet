#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

string inp, remain;

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> inp;
    cin >> remain;

    int pos = inp.find_first_of('|');
    string left = inp.substr(0, pos);
    string right = inp.substr(pos+1, inp.size());

    while(remain.size()) {
        if(left.size() <= right.size()) {
            left += remain.back();
            remain.pop_back();
        } else {
            right += remain.back();
            remain.pop_back();
        }
    }
    if(left.size()!=right.size()) {
        cout << "Impossible";
    } else {
        cout << left << "|" << right;
    }
}