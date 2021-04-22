#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int n;
int md[13] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool is_leap(int y) {
    return (y%4==0 && y%100!=0) || y%400==0;
}

bool is_cont(int ad, int am, int ay, int bd, int bm, int by) {
    if(bd==1 && bm==3 && is_leap(by)) {
        bd = 29;
        bm = 2;
    }
    else {
        bd--;
        if(bd==0) {
            bm--;
            if(bm==0) {
                bm = 12;
                by--;
            }
            bd = md[bm];
        }
    }
    return ad==bd && am==bm && ay==by;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    while(cin>>n && n!=0) {
        int ad = 0, am = 0, ay = 0, ac = 0;
        int ans1 = 0, ans2 = 0;
        while(n--) {
            int bd, bm, by, bc;
            cin >> bd >> bm >> by >> bc;
            if(is_cont(ad, am, ay, bd, bm, by)) {
                ans1++;
                ans2 += bc-ac;
            }
            ad = bd; am = bm; ay = by; ac = bc;
        }
        cout << ans1 << " " << ans2 << "\n";
    }
}