/* 
 * abc241b
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    int x;
    rep(i,n) {
        cin >> x;
        mp[x]++;
    }
    rep(i,m) {
        cin >> x;
        if(mp[x]==0 || !mp.count(x)) {
            cout << "No" << endl;
            return 0;
        }
        mp[x]--;
    }
    cout << "Yes" << endl;
    return 0;
}
