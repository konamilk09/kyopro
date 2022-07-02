/* 
 * abc256a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) {
        cin >> a[i];
    }
    int ans = 0;
    int count = 0;
    for(int i=0; i<4; i++) {
        count += a[n-1-i];
        if(count>=4) break;
        ans++;
    }

    if(n-ans < 0) cout << 0 << endl;
    else cout << n - ans << endl;
    return 0;
}
