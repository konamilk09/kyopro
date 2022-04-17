/// abc246c

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    ll sum=0;
    for(int i=0; i<n; i++) sum += a[i];

    int q=0;
    for(int i=0; i<n; i++) q += a[i]/x;
    q = min(q, k);
    k -= q;
    sum -= q*x;

    for(int i=0; i<n; i++) a[i] %= x;
    sort(a.begin(), a.end(), greater<int>{});

    for(int i=0; i<n; i++) {
        if(k == 0) break;
        sum -= a[i];
        k--;
    }

    cout << sum << endl;
    return 0;
}
