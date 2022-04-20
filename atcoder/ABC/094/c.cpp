/*abc094c*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;

    vector<int> x(n);
    rep(i,n) cin >> x[i];

    vector<int> a(n);
    for(int i=0; i<n; i++) a[i] = x[i];

    sort(a.begin(), a.end());

    int med1 = a[n/2-1];
    int med2 = a[n/2];

    for(int i=0; i<n; i++) {
        if(x[i]>=med2) cout << med1 << endl;
        else cout << med2 << endl;
    }
    return 0;
}
