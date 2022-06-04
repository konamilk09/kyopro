/* 
 * abc253c
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    map<int, int> s; // s[x] = xが何個あるか
    int q;
    cin >> q;
    rep(i,q) {
        int t;
        cin >> t;
        if(t == 1) {
            int x;
            cin >> x;
            s[x]++;
        }
        if(t == 2) {
            int x, c;
            cin >> x >> c;
            s[x] -= min(c, s[x]);
            if(s[x] == 0) s.erase(x);
        }
        if(t == 3) {
            cout << s.rbegin()->first - s.begin()->first << endl;
        }
    }
    
    return 0;
}
