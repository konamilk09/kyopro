/* 
 * abc252c
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> S(n);
    rep(i,n) {
        cin >> S[i];
    }

    vector<int> A(10); // A[i] = 数字iが何回で終わるか
    rep(i,10) {
        vector<int> cnt(10, 0); // cnt[j] = 同じ列で数字jが何回出てくるか
        rep(j,n) {
            cnt[int(S[j][i]-'0')]++;
        }
        rep(j,10) {
            A[j] = max((cnt[j]-1)*10+i, A[j]);
        }
    }
    
    int ans = 1000;
    rep(i,10) ans = min(A[i], ans);
    cout << ans << endl;
    return 0;
}
