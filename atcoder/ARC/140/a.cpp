/* 
 * arc140a
 * 上手く行っていない
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> yakusu(0);
    for(int i=2; i*i<=n; i++) {
        if(n%i==0) yakusu.push_back(i);
    }
    for(const int& yaku : yakusu) {
        for()
    }
    int ans = 0;

    cout << ans << endl;
    return 0;
}
