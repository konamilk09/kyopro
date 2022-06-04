/* 
 * abc233d
 * 累積和+map(二分探索)
 * l<=r に注意
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp; // i番目以下の合計値と、それが何個あるか
    vector<ll> a(n); // A[i]
    vector<ll> sum(n+1); // i番目以下の合計値
    sum[0] = 0;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) sum[i+1] = sum[i] + a[i];

    ll ans = 0;
    for(int i=1; i<=n; i++) { // 1からnがsum
        mp[sum[i-1]]++; // sum[i]-k=sum[i]のときにmp[sum[i]]が足されてしまう
        ll g = sum[i] - k;
        ans += mp[g];
    }

    cout << ans << endl;
    return 0;
}
