/* 
 * abc213b
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int max1 = -1;
    int max2 = -1;
    int idx1, idx2;
    rep(i,n) {
        int a;
        cin >> a;
        if(a > max1) {
            max2 = max1;
            max1 = a;
            idx2 = idx1;
            idx1 = i;
        }
        else if(a > max2) {
            max2 = a;
            idx2 = i;
        }
    }
    
    cout << idx2+1 << endl;
    return 0;
}
