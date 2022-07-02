/* 
 * abc225c
 * 場合分けで全通り含める
 * 列の数に気を付ける：端がmod7=0までしかない
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> B(n, vector<int>(m));
    vector<vector<int>> mod(n, vector<int>(m));
    string ans = "Yes";
    rep(i,n) rep(j,m) {
        cin >> B[i][j];
        mod[i][j] = (B[i][j]-1)%7+1;
        if(i==0 && j==0) continue;
        else if(i==0) {
            if(B[i][j] != B[i][j-1]+1) ans = "No";
            if(mod[i][j] != mod[i][j-1]+1) ans = "No";
        }
        else if(j==0) {
            if(B[i][j] != B[i-1][j]+7) ans = "No";
        }
        else {
            if(B[i][j] != B[i][j-1]+1) ans = "No";
            if(mod[i][j] != mod[i][j-1]+1) ans = "No";
        }

    }
    cout << ans << endl;
    return 0;
}
