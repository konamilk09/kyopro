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

        for(int j=0; j<a; j++) {
            fb = fa;
        string s = "";
        rep(k,n) {
            int l;
            for(l=0; l<b; l++) {
                if(fb) s = s+'.';
                else s = s+'#';
            }
            fb = !fb;
        }
        cout << s << endl;

        }

        
    }
    return 0;
}
