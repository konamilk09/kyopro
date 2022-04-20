/*abc248b*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    ll a, b, k;
    cin >> a >> b >> k;
    int c=0;
    while(a<b) {
        a *= k;
        c++;
    }

    cout << c << endl;
    
    return 0;
}
