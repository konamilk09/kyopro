/* 
 * abc000a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int b = 1;
    int ra = 0;
    rep(i,n) {
        int a;
        cin >> a;
        if(a==b) {
            ra++;
            b++;
        }
    }
    if(ra == 0) cout << -1 << endl;
    else cout << n-ra << endl;
    return 0;
}
