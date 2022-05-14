/* 
 * abc240d
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> hole;
    int cnt=0;
    rep(i,n) {
        int a;
        cin >> a;
        if(hole.empty() || hole.back().first!=a) {
            cnt++;
            hole.push_back(make_pair(a, 1));
        }
        else {
            hole.back().second++;
            cnt++;
            if(hole.back().second==a) {
                hole.pop_back();
                cnt -= a;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
