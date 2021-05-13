#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

/*
輸入的四個點中，重複的點一定是連接兩條邊的點，所以我們要找的是重覆的點的對角線的點，另外兩個不是重複的點，他們相連就是對角線。平行四邊形的對角線座標相加，會等於另一條對角線相加。

公式：不是重複的點+另一個不是重複的點=重複的點+要求的點。

所以只要把題目給的4個點先加起來，在減掉三次重複的點就是答案了。

公式：不是重複的點+另一個不是重複的點+(重複的點*2)=重複的點+要求的點+(重複的點*2)。
*/

int main() {
    // ios::sync_with_stdio(0); 
    // cin.tie(0);
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);
    string xx1, yy1, xx2, yy2, xx3, yy3, xx4, yy4;
    set<ar<string, 2>> s;
    while(cin >> xx1 >> yy1 >> xx2 >> yy2 >> xx3 >> yy3 >> xx4 >> yy4) {
        double rx, ry;
        s.insert({xx1, yy1});
        s.insert({xx2, yy2});
        if(s.count({xx3, yy3})) {
            rx = stod(xx3);
            ry = stod(yy3);
        } else {
            rx = stod(xx4);
            ry = stod(yy4);
        }
        double x1 = stod(xx1), y1 = stod(yy1), x2 = stod(xx2), y2 = stod(yy2), x3 = stod(xx3), y3 = stod(yy3), x4 = stod(xx4), y4 = stod(yy4);
        printf("%.3f %.3f\n", x1+x2+x3+x4-3*rx, y1+y2+y3+y4-3*ry);
    }
}