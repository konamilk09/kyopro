/** 
 * abc255d
 * 
 */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define all(a) (a).begin(),(a).end()

int main() {
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    sort(all(a));

    // 累積和 sum[i] = i-1番目までの和
    vector<ll> sum(n+1);
    sum[0] = 0;
    for(int i=0; i<n; i++) {
        sum[i+1] = sum[i]+a[i];
    }
    rep(i,q) {
        ll ans = 0;
        ll x;
        cin >> x;
        auto it = lower_bound(all(a), x); // x 以上で最小のもの
        ans += x*(it - a.begin()) - sum[it-a.begin()];
        ans += sum[n] - sum[it-a.begin()] - x*(n - (it - a.begin()));
        cout << ans << endl;
    }

    return 0;
}
