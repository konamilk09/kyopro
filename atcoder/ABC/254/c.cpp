/* 
 * abc254c
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<vector<int>> b(k);
    for(int i=0; i<n; i++) {
        b[i%k].push_back(a[i]);
    }
    rep(i,k) sort(b[i].begin(), b[i].end());
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++) {
        int j = i/k;
        if(a[i] != b[i%k][j]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" <<endl;
    return 0;
}
