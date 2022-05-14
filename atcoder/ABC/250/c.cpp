/* 
 * abc250c
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n); // a[i番目]=数
    vector<int> b(n); // b[数]=i番目

    rep(i,n) {a[i] = i; b[i] = i;}
    
    rep(i,q) {
        int x; cin >> x;
        x--;

        int tmpa = a[b[x]];
        int tmpb = b[x];
        if(b[x] == n-1) {
            b[x]--; b[a[tmpb-1]]++;
            a[tmpb] = a[tmpb-1];
            a[tmpb-1] = tmpa;
        }
        else {
            b[x]++; b[a[tmpb+1]]--;
            a[tmpb] = a[tmpb+1];
            a[tmpb+1] = tmpa;
        }


    }
    rep(i,n) cout << a[i]+1 << " ";
    cout << endl;
    return 0;
}
