/* 
 * abc253b
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    int sx, sy, gx, gy;
    bool isfirst = true;
    rep(i,h) rep(j,w) {
        if(isfirst && s[i][j] == 'o') {
            sx = i;
            sy = j;
            isfirst = false;
        }
        if(!isfirst && s[i][j] == 'o') {
            gx = i; 
            gy = j;
        }
    }

    cout << abs(sx-gx)+abs(sy-gy) << endl;

    return 0;
}
