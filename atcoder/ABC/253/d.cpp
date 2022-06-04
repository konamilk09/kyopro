/* 
 * abc253a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long; // max = 9*10^18+a

int main() {
    ll n, a, b;
    cin >> n >> a >> b;

    ll sum = (n+1) * n / 2;
    
    ll na = n / a;
    ll suma = a * ((na+1)*na/2);
    
    ll nb = n / b;
    ll sumb = b * ((nb+1)*nb/2);

    ll gab = gcd(a,b); // a と b の最大公約数
    ll lab = a*b/gab;

    ll nab = n / lab;
    ll sumab = lab * ((nab+1)*nab/2);

    cout << sum - suma - sumb + sumab << endl;
    return 0;
}
