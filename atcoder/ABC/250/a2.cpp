/* 
 * abc250a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int h, w, r, c;
    cin >> h >> w >> r >> c;
    int ans=0;
    if(r!=1) ans++; // 上にマスがある
    if(c!=1) ans++; // 左にマスがある
    if(r!=h) ans++; // 下にマスがある
    if(c!=w) ans++; // 右にマスがある
    cout << ans << endl;
    return 0;
}
