#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

const int maxN = 300;
int n;
string field[maxN];

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    cin >> n;
    char a, b;
    for(int i = 0; i < n; ++i) {
        cin >> field[i];
        for(int j = 0; j < n; ++j) {
            if(i==0 && j==0) a = field[i][j];
            if(i==0 && j==1) b = field[i][j];
            if(i==j || i+j==n-1) {
                if(field[i][j]!=a) {
                    cout << "NO";
                    return 0;
                }
            } else {
                if(field[i][j]!=b) {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    if(a==b) {
        cout << "NO";
        return 0;
    }
    cout << "YES";
}