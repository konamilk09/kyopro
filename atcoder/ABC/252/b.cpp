/* 
 * abc252b
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
    vector<int> b(k);
    int max_i;
    int max = -1;
    rep(i,n) {
        cin >> a[i];
        if(a[i]>max) max = a[i];
    }
    vector<int> idx;
    rep(i,n) {
        if(a[i] == max) {
            idx.push_back(i);
        }
    }
    rep(i,k) {
        cin >> b[i];
        for(int max_i : idx) {
            if(b[i]-1 == max_i) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
