/* 
 * abc000a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    cout << 297 << endl;
    int cnt=0;
    for(int i=1; i<100; i++) {
        cout << i << " " << i*100 << " " << i*10000 << " ";
        cnt++;
    }
    cout << endl;
    return 0;
}
