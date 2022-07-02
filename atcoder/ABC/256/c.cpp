/* 
 * abc000a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int h1, h2, h3, w1, w2, w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    
    int ans = 0;
    int a, b, c, d, e;
    for(int i=1; i<=30: i++) {
        for(int j=1; j<=30; j++) {
            for(int k=1; k<=30; k++) {
                for(int l=1; l<=30; l++) {
                    a = h1-i-j;
                    b = h2-k-l;
                    c = w1-i-k;
                    d = w2-j-l;
                    e = w3-a-b;
                    cout << ans << endl;
                    if(a>0 && b>0 && c>0 && d>0 && e==h3-c-d) {
                        cout << i << j << a << endl;
                        cout << k << l << b << endl;
                        cout << c << d << e << endl;
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
