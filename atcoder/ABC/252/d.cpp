/* 
 * abc252d
 * 並び替えて、別の簡単な問題に変換
 */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define all(A) A.begin(), A.end()

int main() {
    int n;
    cin >> n;
    
    vector<int> cnt(200010, 0); // cnt[i] = a==iの個数
    int max_a = -1;
    rep(i,n) {
        int a;
        cin >> a;
        max_a = max(a, max_a);
        cnt[a]++;
    }
    vector<int> num(max_a+2, 0); // a<iの個数
    rep(i, max_a+1) {
        num[i+1] = num[i] + cnt[i];
    }
    
    ll ans = 0;
    for(int i=1; i<max_a; i++) {
        ans += (ll)num[i] * (num[i+1]-num[i]) * (num[max_a+1]-num[i+1]);
    }
    cout << ans << endl;
    return 0;
}
