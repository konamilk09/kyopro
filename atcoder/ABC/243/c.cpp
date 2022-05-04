/* 
 * abc243c
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    map<int, int> right_min; // y=kのとき右を向く最小値
    map<int, int> left_max; // y=kのとき左を向く最大値
    
    vector<int> x(n);
    vector<int> y(n);
    rep(i,n) cin >> x[i] >> y[i];
    
    string s; cin >> s;

    rep(i,n) {
        if(s[i]=='R') {
            // 存在する
            if(right_min.count(y[i])) {
                // かつxがすでにmapに入っているものより小さい
                if(right_min[y[i]]>x[i]) right_min[y[i]]=x[i];
            }
            else right_min[y[i]]=x[i];
        }
        if(s[i]=='L') {
            if(left_max.count(y[i])){
                if(left_max[y[i]]<x[i]) left_max[y[i]]=x[i];
            }
            else left_max[y[i]]=x[i];
        }
    }
    
    for(auto a : right_min) {
        // 左を向く人で同じyの人が存在し、かつxが右を向く人より大きい時
        if(left_max.count(a.first) && left_max[a.first]>a.second) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
