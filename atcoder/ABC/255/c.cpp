/* 
 * abc255c
 * 大まかに場合分けする
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    ll x, a, d, n;
    cin >> x >> a >> d >> n;
    if(d==0) {
        cout << abs(x-a) << endl;
        return 0;
    }

    ll start, end;
    if(d<0) {
        start = a+d*(n-1);
        end = a;
    }
    else {
        start = a;
        end = a+d*(n-1);
    }
    d = abs(d);

    ll ans;
    if(start<=x && x<=end) {
        ans = min(d-(x-start)%d, (x-start)%d);
    }
    else if(x<start) {
        ans = start - x;
    }
    else {
        ans = x - end;
    }

    cout << ans << endl;
    return 0;
}
