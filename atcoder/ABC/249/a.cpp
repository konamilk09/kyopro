/* 
 * abc249a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int p1, p2;
    if(x%(a+c)<a) {
        p1 = x/(a+c)*a*b + x%(a+c)*b;
    }
    else p1 = x/(a+c)*a*b + a*b;
    
    if(x%(d+f)<d) {
        p2 = x/(d+f)*d*e + x%(d+f)*e;
    }
    else p2 = x/(d+f)*d*e + d*e;
    
    if(p1>p2) cout << "Takahashi" << endl;
    if(p1<p2) cout << "Aoki" << endl;
    if(p1==p2) cout << "Draw" << endl;
    return 0;
}
