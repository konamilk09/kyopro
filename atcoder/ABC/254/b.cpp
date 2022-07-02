/* 
 * abc254b
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for(int i=0; i<n; i++) {
        a[i][0] = 1;
    }
    for(int i=1; i<n; i++) {
        for(int j=1; j<i+1; j++) {
            a[i][j] = a[i-1][j] + a[i-1][j-1];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
