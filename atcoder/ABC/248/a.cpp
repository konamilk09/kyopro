/*abc248a*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    string s;
    cin >> s;
    vector<int> hash(10, 0);
    for(int i=0; i<9; i++) {
        int num = int(s[i]-'0');
        hash[num] = 1;
    }
    for(int i=0; i<10; i++) {
        if(hash[i] == 0)
        cout << i << endl;
    }
    return 0;
}
