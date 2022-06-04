/* 
 * abc220a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a%c==0) cout << a;
    else if((a/c+1)*c <= b) cout << (a/c+1)*c << endl;
    else cout << -1 << endl;
    return 0;
}
