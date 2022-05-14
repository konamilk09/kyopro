/* 
 * abc250b
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    bool fa = true;
    bool fb = true;

    rep(i,n) {
        if(i%2==0) fa = true;
        else fa = false;

        rep(j,a) {

            string s = "";
            rep(k,n) {
                if(k%2==0) fb = true;
                else fb = false;

                if(fa==fb) rep(l,b) s = s+'.';
                else rep(l,b) s = s+'#';
            }
            cout << s << endl;

        }
        
    }
    return 0;
}
