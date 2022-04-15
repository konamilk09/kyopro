/*keyence2020-c*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n, k, s;
    cin >> n >> k >> s;

    int comn = n-k;

    for(int i=0; i<k; i++) 
        cout << s << " ";
    
    if(s!=1000000000) {
        for(int i=0; i<comn; i++) 
            cout << s+1 << " ";
    } else {
        for(int i=0; i<comn; i++) 
            cout << 1 << " ";
    }

    cout << endl;
    return 0;
}
