#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

/*
Let's iterate over the first number of the pair, let it be x. Then we need to count numbers from 1 to m with the remainder of dividing 5 equal to (5 - xmod5)mod 5. For example, you can precalc how many numbers from 1 to m with every remainder between 0 and 4.
*/

const int maxN = 1e6, maxM = maxN;
int n, m;
int pre[maxM+1];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < 5; ++i) {
        for(int x = i; x <= m; x += 5) {
            pre[i]++;
        }
    }
    pre[0]--;

    ll ans = 0;
    for(int i = 1; i <= n; ++i) {
        ans += pre[(5-i%5)%5];
    }
    cout << ans;
}