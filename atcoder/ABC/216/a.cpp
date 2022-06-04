/* 
 * abc216a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    double n;
    cin >> n;
    int y = int(n * 10) % 10;
    double x = n-y*0.1;
    if(0 <= y && y <= 2) cout << x << "-" << endl;
    if(3 <= y && y <= 6) cout << x << endl;
    if(7 <= y && y <= 9) cout << x << "+" << endl;
    return 0;
}
