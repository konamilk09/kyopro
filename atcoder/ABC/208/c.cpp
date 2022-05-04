/* 
 * abc208c
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = unsigned long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n) {cin >> a[i]; a[i]--;}
    ll q = k/n;
    ll m = k%n;
    cout << m << endl;
    rep(i,n) {
        if(a[i]<m) cout << q+1 << endl;
        else cout << q << endl;
    }
    return 0;
}
