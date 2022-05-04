/* 
 * abc245d
 * 多項式
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n+1);
    vector<int> b(m+1);
    vector<int> c(n+m+1);

    rep(i,n+1) cin >> a[i];
    rep(i,n+m+1) cin >> c[i];

    for(int i=m; i>=0; i--) {
        b[i] = c[n+i]/a[n];
        rep(j,n+1) {
            c[i+j] -= a[j]*b[i];
        }
    }
    
    rep(i,m+1) cout << b[i] << endl;
    return 0;
}
