/* 
 * abc216b
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    map<string, string> m;
    string s, t;
    rep(i,n) {
        cin >> s >> t;
        if(m.count(s)){
            if(m.at(s)==t) {
                cout << "Yes" << endl;
                return 0;
            }
        }
        else m[s] = t;
    }
    cout << "No" << endl;
    return 0;
}
