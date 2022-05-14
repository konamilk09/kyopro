/* 
 * abc249d
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;

    vector<int> A(n);

    int mA=0;
    vector<int> cnt(200001, 0); //cnt[x] = A[i]=xがいくつあるか
    rep(i,n) {
        int x;
        cin >> x;
        cnt[x]++;
        mA =  max(mA, x);
    }
    
    ll ans = 0;
    for(int a=1; a<=mA; a++) { // A[i]にするとうまくいかない下に補足あり
        for(int b=1; a*b<=mA; b++) {
            ans += (ll)cnt[b]*cnt[a]*cnt[a*b];
        }
    }

    cout << ans << endl;
    return 0;
    /*
    for(int i=0; i<n; i++) {
        int a = A[i];
        (*・・・*)
    }
    A[i] = A[j] とかが存在すると、2回数えられてしまう。
    */
}
