/* 
 * abc218b
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    string ans="12345678901234567890123456";
    for(int i=0; i<26; i++) {
        int n;
        cin >> n;
        ans[i] = ('a'+(n-1));
    }
    cout << ans << endl;
    return 0;
}
