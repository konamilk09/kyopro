/* 
 * abc249a
 * bit全探索
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> S(n);
    rep(i,n) cin >> S[i];

    int ans = 0;
    
    for(int bit=0; bit<(1<<n); bit++) {
        vector<string> s;
        vector<int> letter(26, 0);

        for(int i=0; i<n; i++) {
            if(bit & (1<<i)){
                for(int j=0; j<(int)S[i].size(); j++) {
                    letter[int(S[i][j]-'a')]++;
                }
            }
        }
        int cnt = 0;
        for(int i=0; i<26; i++) {
            if(letter[i]==k) cnt++;
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;
    return 0;
}
