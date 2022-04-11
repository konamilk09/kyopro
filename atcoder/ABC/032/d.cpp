#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> v(N);
    vector<int> w(N);
    for(int i = 0; i < N; i++) cin >> v[i] >> w[i];

    vector<vector<int>> dp(N+1, vector<int>(W+1));
    
    for(int i = 0; i <= N; i++){
        dp[i][0] = 0;
    }
    
    for(int i = 0; i < N; i++){
        for(int weight = w[i]; weight <= W; weight++){
            dp[i+1][weight] = max(dp[i][weight-w[i]]+v[i], dp[i][weight]);
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}
