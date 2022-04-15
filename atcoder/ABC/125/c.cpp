/*abc125-c*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i,n) cin >> A[i];

    vector<int> L(n+1); // A[i-1]までの最大公約数
    vector<int> R(n+2); // A[i]以降の最大公約数
    L[0] = 0;
    rep(i,n) L[i+1] = gcd(L[i], A[i]);
    R[n] = 0;
    for(int i=n-1; i>=0; i--) R[i] = gcd(R[i+1], A[i]);

    int ans = -1;
    for(int i=0; i<n; i++) {
        int g = gcd(L[i], R[i+1]);
        ans = max(ans, g);
    }
    cout << ans << endl;
    return 0;
}
