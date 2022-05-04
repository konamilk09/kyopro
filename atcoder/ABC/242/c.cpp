/* 
 * abc242c
 * dp
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;
#define mod 998244353

int main() {
    int n;
    cin >> n;
    vector<vector<ll>> dp(n, vector<ll>(9));
    vector<int> x = {-1, 0, 1};
    rep(i,9) dp[0][i]=1;
    rep(i,n-1) rep(j,9) {
        if(j==0) dp[i+1][j] = (dp[i][j] + dp[i][j+1]) % mod;
        else if(j==8) dp[i+1][j] = (dp[i][j] + dp[i][j-1] % mod);
        else rep(k,3) dp[i+1][j] += dp[i][j+x[k]] % mod;
    }
    ll ans = 0;
    rep(i,9) ans += dp[n-1][i] % mod;
    cout << ans% mod << endl;
    return 0;
}
