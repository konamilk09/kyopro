/* 
 * abc182d
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) {
        cin >> a[i];
    }
    ll curp=0;
    ll maxp=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            curp += a[j];
            maxp = max(maxp, curp);
        }
    }
    cout << maxp << endl;
    return 0;
}
