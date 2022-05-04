/* 
 * abc243d
 * deque
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    ll x;
    string s;
    cin >> n >> x >> s;
    deque<char> t;
    rep(i,n) {
        if(s[i]=='U' 
            && !t.empty() 
            && (t.back()=='L' || t.back()=='R')) {
            t.pop_back();
        }
        else t.push_back(s[i]);
    }
    // rep(i,t.size()) cout << t[i] << endl;
    int ts = t.size();
    for(int i=0; i<ts; i++){
        if(t.front()=='U') x /= 2;
        if(t.front()=='R') x = x*2+1;
        if(t.front()=='L') x = x*2;
        t.pop_front();
    }

    cout << x << endl;
    return 0;
}
