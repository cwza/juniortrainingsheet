#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n, m;
vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
int mp[51];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < primes.size()-1; ++i) {
        mp[primes[i]] = primes[i+1];
    }
    if(mp[n]==m) cout << "YES";
    else cout << "NO";
}