/* 
 * abc000a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    if(n==1) {
        rep(i,6) cout << s;
        cout << endl;
        return 0;
    }
    if(n==2) {
        rep(i,3) cout << s;
        cout << endl;
        return 0;
    }
    if(n==3) {
        rep(i,2) cout << s;
        cout << endl;
        return 0;
    }
    return 0;
}
