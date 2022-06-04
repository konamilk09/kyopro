/* 
 * abc220b
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int k;
    string a, b;
    cin >> k >> a >> b;
    vector<ll> jo(100000);
    jo[0] = 1;
    for(int i=0; i<100000-1; i++) {
        jo[i+1] = jo[i]*k;
    }
    ll a2 = 0;
    for(int i=0; i<(int)a.size(); i++) {
        a2 += int(a[i]-'0')*jo[a.size()-i-1];
    }
    ll b2 = 0;
    for(int i=0; i<(int)b.size(); i++) {
        b2 += int(b[i]-'0')*jo[b.size()-i-1];
    }
    cout << a2*b2 << endl;
    return 0;
}
