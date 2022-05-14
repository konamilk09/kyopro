/* 
 * abc250a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int h, w, r, c;
    cin >> h >> w >> r >> c;
    if(h==1 && w==1) cout << 0 << endl;
    else if(h==1){
        if(c==1 || c==w) cout << 1 << endl;
        else cout << 2 << endl;
    }
    else if(w==1){
        if(r==1 || r==h) cout << 1 << endl;
        else cout << 2 << endl;
    }
    else {
    if(r==1 && c==1) cout << 2 << endl;
    else if(r==h && c==w) cout << 2 << endl;
    else if(r==1 && c==w) cout << 2 << endl;
    else if(r==h && c==1) cout << 2 << endl;
    else if(r==1) cout << 3 << endl;
    else if(c==1) cout << 3 << endl;
    else if(r==h) cout << 3 << endl;
    else if(c==w) cout << 3 << endl;
    else cout << 4 << endl;
    }
    return 0;
}
