/*abc248d*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    vector<int> numx[n];
    // numx[i][]で数字iがどの場所にあるか。
    rep(i,n) {
        cin >> a[i];
        a[i]--;
        numx[a[i]].push_back(i);
    }

    cin >> q;
    rep(i,q) {
        int l, r, x;
        cin >> l >> r >> x;
        l--; r--; x--;
        auto f = lower_bound(numx[x].begin(), numx[x].end(), l);
        auto b = upper_bound(numx[x].begin(), numx[x].end(), r);
        cout << b-f << endl;
    }
    
    return 0;
}
