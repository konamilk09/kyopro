/* 
 * abc253e
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;
#define mod 998244353

int main() {
    ll N, M, K;
    cin >> N >> M >> K;
    vector<vector<ll>> dp(N, vector<ll>(M)); // dp[i][j]=A[i]==jとなる個数
    rep(i,M) dp[0][i] = 1;
    rep(i,N-1) {
        vector<ll> sum(M+1);
        sum[0] = 0; // sum[j]=A[i]<jとなる個数
        for(int j=0; j<M; j++) {
            sum[j+1] = sum[j] + dp[i][j];
            sum[j+1] %= mod;
        } 
        rep(j, M) {
            dp[i+1][j] = sum[M];
            if(K>0) dp[i+1][j] -= sum[min(j+K, M)] - sum[max(j-K+1, (ll)0)];
            dp[i+1][j] += mod;
            dp[i+1][j] %= mod;
        }
    }
    ll ans = 0;
    rep(i,M) {
        ans += dp[N-1][i];
    }
    cout << ans%mod << endl;
    return 0;
}
