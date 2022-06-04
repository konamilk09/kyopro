/* 
 * abc217b
 * 
 */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define all(A) A.begin(), A.end()

int main() {
    set<string> s;
    rep(i,3) {
        string a;
        cin >> a;
        s.insert(a);
    }
    if(!s.count("ABC")) cout << "ABC" << endl;
    if(!s.count("ARC")) cout << "ARC" << endl;
    if(!s.count("AGC")) cout << "AGC" << endl;
    if(!s.count("AHC")) cout << "AHC" << endl;
    return 0;
}
