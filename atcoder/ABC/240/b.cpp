/* 
 * abc240b
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    map<int, int> mp;
    rep(i,n) {
        int a;
        cin >> a;
        mp[a]++;
    }

    cout << mp.size() << endl;
    return 0;
}
