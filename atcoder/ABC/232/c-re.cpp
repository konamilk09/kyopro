/*abc232c*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> T[n];
    vector<int> A[n];
    vector<int> T2[n];

    if(m==0) {
        cout << "Yes" << endl;
    } else {

    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        T[a].push_back(b);
        T[b].push_back(a);
    }

    for (int i=0; i<m; i++) {
        int c, d;
        cin >> c >> d;
        c--; d--;
        A[c].push_back(d);
        A[d].push_back(c);
        T2[c].push_back(d);
        T2[d].push_back(c);
    }
    
    for (int i=0; i<n; i++) 
        if(!A[i].empty()) sort(A[i].begin(), A[i].end());
  
    vector<int> P(n);  
    for (int i=0; i<n; i++) P[i] = i;

    bool flag=false;
    do {
        for(int i=0; i<n; i++) {
            for(int j=0; j<(int)T[i].size(); j++) {
                T2[P[i]][j] = P[T[i][j]];
            }
        }
        for (int i=0; i<n; i++) 
            if(!T2[i].empty()) sort(T2[i].begin(), T2[i].end());
        
        bool issame=true;
        for (int i=0; i<n; i++) {
            for(int j=0; j<(int)A[i].size(); j++) {
                if(T2[i][j] != A[i][j]) issame=false;
            }
        }
        if(issame) flag=true;
    } while (next_permutation(P.begin(), P.end()));
    
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    }
    return 0;
}
