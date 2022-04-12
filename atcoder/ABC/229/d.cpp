/**
 * abc229-d
 * 尺取り法
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    string S;
    cin >> S;
    int k;
    cin >> k;

    int n = S.size();
    vector<int> cnt(n+1); // 累積和
    for(int i=0; i<n; i++) {
        if(S[i]=='.') cnt[i+1]=cnt[i]+1; 
        // i=0から始めたいときはi+1=iを考える
        else cnt[i+1]=cnt[i];
    }

    int ans = 0;
    int r = 0;
    for(int l=0; l<n; l++) {
        while(r<n && cnt[r+1]-cnt[l] <= k) {
        // rがある地点まで右に行ったとするとそこからまた左に戻くることはない
            r++;
        }
        ans = max(ans, r-l);
    }

    cout << ans << endl;
    return 0;
}
