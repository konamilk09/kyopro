/* 
 * abc000a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    set<string> st;
    map<int, int> mp;
    rep(i,n) {
        string s;
        int t;
        cin >> s >> t;
        if(st.count(s)) continue;
        st.insert(s);
        if(mp.count(1000000000-t)) continue;
        mp[1000000000-t] = i; // 得点tがi番目
    }

    cout << (*mp.begin()).second+1 << endl;
    return 0;
}
