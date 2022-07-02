/* 
 * abc255b
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    set<int> s;// 明かりを持つ点
    rep(i,k) {
        int a;
        cin >> a;
        a--;
        s.insert(a);
    }
    vector<double> x(n);
    vector<double> y(n);
    rep(i,n) {
        cin >> x[i] >> y[i];
    }
    double need_min_dis = 0;
    rep(i,n) {
        if(s.count(i)) continue;
        double i_min = DBL_MAX;
        for(int a : s) {
            double cur = pow(x[a]-x[i], 2.0) + pow(y[a]-y[i], 2.0);
            if(cur < i_min) {
                i_min = cur;
            }
        }
        if(need_min_dis < i_min) need_min_dis = i_min;
    }
    printf("%.15f\n", sqrt(need_min_dis));
    return 0;
}
