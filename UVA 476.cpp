#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

vector<ar<double, 4>> recs;

bool is_in(double x, double y, double rx1, double ry1, double rx2, double ry2) {
    return x>rx1 && x<rx2 && y>ry2 && y<ry1;
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    while(true) {
        char qt;
        cin >> qt;
        if(qt=='*') break;
        double rx1, ry1, rx2, ry2;
        cin >> rx1 >> ry1 >> rx2 >> ry2;
        recs.push_back({rx1, ry1, rx2, ry2});
    }
    int n = 0;
    while(true) {
        string xx, yy;
        cin >> xx >> yy;
        if(xx=="9999.9" && yy=="9999.9") return 0;
        n++;
        double x = stod(xx), y = stod(yy);
        int cnt = 0;
        for(int i = 0; i < recs.size(); ++i) {
            auto [rx1, ry1, rx2, ry2] = recs[i];
            if(is_in(x, y, rx1, ry1, rx2, ry2)) {
                cnt++;
                cout << "Point " << n << " is contained in figure " << i+1 << "\n";
            }
        } 
        if(cnt==0) cout << "Point " << n << " is not contained in any figure\n";
    }
}