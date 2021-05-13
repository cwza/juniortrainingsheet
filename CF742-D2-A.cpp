#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n;
int arr[4] = {8, 4, 2, 6};

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    if(n==0) {
        cout << 1;
        return 0;
    }
    cout << arr[(n-1)%4];
}