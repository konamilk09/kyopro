/* 
 * abc219a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int x;
    cin >> x;
    if(x >= 90) cout << "expert" << endl;
    else if(x >= 70) cout << 90-x << endl;
    else if(x >= 40) cout << 70-x << endl;
    else cout << 40-x << endl;
    return 0;
}
