/* 
 * abc254d
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;

    int ans=0;
    // i を固定して: 10^5
    for(int i = 1; i <= n; i++) {
        // i の約数で平方数で最大を求める
        int fi;
        for(fi = sqrt(i); fi >= 1; fi--) {
            if(i%(fi*fi)==0) break;
        }
        int k = i / (fi*fi);
        // 10^2
        for(int j = 1; j*j*k <= n; j++) {
            ans++;
        }
    }
    
    cout << ans <<endl;
    return 0;
}
