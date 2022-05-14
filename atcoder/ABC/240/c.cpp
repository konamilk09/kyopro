/* 
 * abc240c
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int Q;
    cin >> Q;

    multiset<ll> s;

    rep(i,Q) {
        ll q, x, k;
        cin >> q;
        bool ok = true;

        if(q==1) {
            cin >> x;
            s.insert(x);
        }

        else if(q==2) {
            cin >> x >> k;
            auto ite = s.upper_bound(x);
            rep(i,k) {
                if(ite == s.begin()) {
                    ok = false;
                    break;
                }
                ite--;
            }
            if(ok) cout << *ite << endl;
            else cout << -1 << endl;
        }

        else {
            cin >> x >> k;
            auto ite = s.lower_bound(x);
            rep(i,k-1) {
                if(ite == s.end()) {
                    ok = false;
                    break;
                }
                ite++;
            }
            if(ok && ite != s.end()) cout << *ite << endl;
            /*ぴったりite+k回でs.end()になったときok=trueのまま来てしまう*/
            else cout << -1 << endl;
        }
    }

    return 0;
}
