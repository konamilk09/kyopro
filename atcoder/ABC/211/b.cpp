/* 
 * abc211b
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    vector<int> h(4, 0);
    string s;
    rep(i,4) {
        cin >> s;
        if(s=="H") h[0] = 1;
        if(s=="2B") h[1] = 1;
        if(s=="3B") h[2] = 1;
        if(s=="HR") h[3] = 1;
    }
    rep(i,4) {
        if(h[i]!=1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
