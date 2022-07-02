/* 
 * abc232d
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
  int h, w;
  cin >> h >> w;
  vector c(h, vector<char>(w));
  vector dp(h+1, vector<int>(w+1, 0));
  rep(i,h) rep(j,w) cin >> c[i][j];
  for(int i=h-1; i>=0; --i) {
    for(int j=w-1; j>=0; --j) {
      if(c[i][j] == '#') continue;
      dp[i][j] = max(dp[i+1][j], dp[i][j+1]) + 1;
    }
  }
  cout << dp[0][0] << endl;
  return 0;
}
