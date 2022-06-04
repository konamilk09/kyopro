/* 
 * abc000a
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    set<int> st;
    rep(i,n) {
        if(a[i] <= w)
            st.insert(a[i]);
    }
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(a[i]+a[j] <= w)
                st.insert(a[i]+a[j]);
        }
    }
    for(int i=0; i<n-2; i++) {
        for(int j=i+1; j<n-1; j++) {
            for(int k=j+1; k<n; k++){
                if(a[i]+a[j]+a[k]<= w){
                    st.insert(a[i]+a[j]+a[k]);
                }
            }
        }
    }
    cout << st.size() << endl;
    return 0;
}
