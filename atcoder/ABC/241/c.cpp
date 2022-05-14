/* 
 * abc241c
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> S(n);
    rep(i,n) cin >> S[i];

    bool flag=false;
    int a, b, cnt;

    rep(i,n-5) rep(j,n) {
        cnt=0;
        for(int k=i; k<i+6; k++) {
            if(S[k][j]=='#') cnt++;
        }
        if(cnt>=4) {flag=true; break;}
    }

    rep(i,n) rep(j,n-5) {
        cnt = 0;
        for(int k=j; k<j+6; k++) {
            if(S[i][k]=='#') cnt++;
        }
        if(cnt>=4) {flag=true; break;}
    }


    rep(i,n-5) rep(j,n-5) {

        cnt = 0;
        a=i, b=j;
        for(int k=0; k<6; k++) {
            if(S[a][b]=='#') cnt++;
            a++; b++;
        }
        if(cnt>=4) {flag=true; break;}

        cnt = 0;
        a=i, b=j+5;
        for(int k=0; k<6; k++) {
            if(S[a][b]=='#') cnt++;
            a++; b--;
        }
        if(cnt>=4) {flag=true; break;}
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
