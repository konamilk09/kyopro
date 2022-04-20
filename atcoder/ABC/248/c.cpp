/*abc248b*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;
#define mod 998244353

int main() {
    ll N, M, K;
    cin >> N >> M >> K;
    vector<vector<ll>> dp(N+1, vector<ll>(K+1, 0)); // dp[長さ][iまでの和]
    
    dp[0][0] = 1;
    for(int i=0; i<N; i++) {
        for(int j=0; j<K; j++) {
            for(int m=1; m<=M; m++) 
                if(j+m<=K) dp[i+1][j+m] = (dp[i+1][j+m] + dp[i][j]) % mod;
        }
    }

    ll ans = 0;
    for(int j=1; j<=K; j++) ans = (ans + dp[N][j]) % mod;
    cout << ans << endl;
    
    return 0;
}
