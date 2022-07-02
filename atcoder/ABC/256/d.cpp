/* 
 * abc256d
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    vector<pair<int, int>> vec;
    int n;
    cin >> n;
    rep(i,n) {
        int l, r;
        cin >> l >> r;
        vec.emplace_back(l,0);
        vec.emplace_back(r,1);
    }
    sort(vec.begin(), vec.end());
    int cnt = 0;
    for(int i=0; i<2*n; i++) {
        if(vec[i].second == 0) {
            if(cnt == 0) cout << vec[i].first << " ";
            cnt++;
        }
        else {
            cnt--;
            if(cnt == 0) cout << vec[i].first << endl;
        }
    }
    return 0;
}
