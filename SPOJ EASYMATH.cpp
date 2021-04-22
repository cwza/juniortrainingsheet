#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

/*
https://www.quora.com/How-do-I-solve-the-problem-EASYMATH-on-SPOJ
*/

int t;
ll n, m, a, d;
ll as[5];

ll gcd(ll a, ll b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
    return a*b/gcd(a, b);
}

ll solve(ll n) {
    // return count of numbers that between 1 to n and does not divisable by as[0]~as[4]
    ll tmp = 0; // count of numbers that between 1 to n and divisable by as[0]~as[4]
    for(int bit = 1; bit < 1<<5; ++bit) {
        ll lcmv = 1;
        int cnt = 0;
        for(int i = 0; i < 5; ++i) {
            if(bit & (1<<i)) {
                lcmv = lcm(lcmv, as[i]);
                cnt++;
            }
        }
        if(cnt%2==0) tmp += (-1) * n/lcmv;
        else tmp += n/lcmv;
    }
    return n-tmp;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> n >> m >> a >> d;
        as[0] = a; as[1] = a+d; as[2] = a+2*d; as[3] = a+3*d; as[4] = a+4*d;
        cout << solve(m) - solve(n-1) << "\n";
    }
}