/* 
 * abc212b
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    bool isweak = true;
    bool isstep = true;
    rep(i,3) {
        if(s[i] != s[i+1])
            isweak = false;
        if(((int(s[i+1]-'0')) != (int(s[i]-'0'))+1)
            && !(s[i+1]=='0' && s[i]=='9')) isstep = false;
    }
    if(isweak || isstep) cout << "Weak" << endl;
    else cout << "Strong" << endl;
    return 0;
}
