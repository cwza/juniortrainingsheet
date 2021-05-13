#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n;
int cnt[1001];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    int max_cnt = 0;
    for(int i = 0, a; i < n; ++i) {
        cin >> a;
        cnt[a]++;
        max_cnt = max(max_cnt, cnt[a]);
    }
    if(max_cnt > ceil((double)n/2)) cout << "NO";
    else cout << "YES";
}