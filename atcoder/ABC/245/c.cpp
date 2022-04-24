/* 
 * abc245c
 * dp
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> x(2, vector<int>(n));
    rep(i,n) cin >> x[0][i];
    rep(i,n) cin >> x[1][i];
    
    vector<vector<bool>> dp(n, vector<bool>(2, false));
    dp[0][0] = dp[0][1] = true;
    for(int i=1; i<n; i++) {
        rep(j,2) { // dp[i][j]を求めたい。aのときとbのときで同じ判定
            int pi = i-1;
            rep(pj, 2) { // ひとつ前がaかbか
                if(!dp[pi][pj]) continue; // ひとつ前が存在するかどうか
                if(abs(x[j][i]-x[pj][pi]) <= k) dp[i][j]=true;
            }
        }
    }
    
    if(dp[n-1][0] || dp[n-1][1]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
