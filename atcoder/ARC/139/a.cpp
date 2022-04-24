/* 
 * arc139a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = unsigned long long;

int main() {
    int n;
    cin >> n;

    vector<ll> t(n);
    rep(i,n) cin >> t[i];

    vector<ll> powb(40);
    ll test = 1; powb[0] = 1;
    for(int i=1; i<=40; i++) {
        test *= 2;
        powb[i] = test;
    }

    vector<ll> a(n);
    a[0] = powb[t[0]];
    for(int i=1; i<n; i++) {
        ll k;
        ll q = a[i-1] / powb[t[i]];
        if(q%2==0) k = q+1;
        else k = q+2;
        a[i] = k * powb[t[i]];       
    }
    cout << a[n-1] << endl;
    return 0;
}
