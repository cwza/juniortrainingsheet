#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array



int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    int nt;
    cin >> nt;
    while(nt--) {
        int ax1, ay1, ax2, ay2;
        cin >> ax1 >> ay1 >> ax2 >> ay2;
        int bx1, by1, bx2, by2;
        cin >> bx1 >> by1 >> bx2 >> by2;
        int cx1, cy1, cx2, cy2;
        cx1 = max(ax1, bx1);
        cy1 = max(ay1, by1);
        cx2 = min(ax2, bx2);
        cy2 = min(ay2, by2);
        if(cx1>=cx2 || cy1>=cy2) cout << "No Overlap\n";
        else cout << cx1 << " " << cy1 << " " << cx2 << " " << cy2 << "\n";
        if(nt) cout << "\n";
    }
}