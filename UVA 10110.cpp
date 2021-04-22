#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

/*
Method 1 calculate number of factors 
O(sqrt(n))
*/
// const int maxX = 66000; // sqrt(2^32-1)
// // const int maxX = 20;
// int sieve[maxX+1];
// vector<int> primes;

// void gen_primes() {
//     for(int i = 2; i <= maxX; ++i) {
//         for(int j = 2*i; j <= maxX; j += i) {
//             if(sieve[j]) continue; 
//             sieve[j] = i;
//         }
//     }
//     for(int i = 2; i <= maxX; ++i) {
//         if(!sieve[i]) primes.push_back(i);
//     }
// }

// int num_factors(ll x) {
//     int ans = 1;
//     for(int prime : primes) {
//         if(prime*prime > x) break;
//         int cnt = 0;
//         while(x%prime==0) {
//             x /= prime;
//             cnt++;
//         }
//         ans *= cnt+1;
//     }
//     if(x!=1) ans *= 2;
//     return ans;
// }

// int main() {
//     ios::sync_with_stdio(0); 
//     cin.tie(0);
//     // freopen("input.txt", "r", stdin); 
//     // freopen("output.txt", "w", stdout);
//     gen_primes();
//     ll n;
//     while((cin>>n) && (n!=0)) {
//         int x = num_factors(n);
//         // cout << x << "\n";
//         if(x%2==0) cout << "no\n";
//         else cout << "yes\n";
//     }
// }


/*
Method 2
Use the fact that n has odd number of factors if and only if he is a 完全平方數
otherwise n has even number of factors
O(1)
*/
int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    ll n;
    while((cin>>n) && (n!=0)) {
        auto x = (ll)sqrt(n);
        if(x*x==n) cout << "yes\n";
        else cout << "no\n";
    }
}