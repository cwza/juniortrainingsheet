#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    int step, mod;
    while(cin >> step >> mod) {
        int x = gcd(step, mod);
        cout << right << setw(10) << fixed << step;
        cout << right << setw(10) << fixed << mod;
        cout << "    ";
        if(x==1) cout << left << "Good Choice\n";
        else cout << left << "Bad Choice\n";
        cout << "\n";
    }
}