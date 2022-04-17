/*abc232c*/
/*nが小さいので、n*nの配列を作っちゃってどの点とどの点が繋がっているかを1で表す*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (i = 0; i < (n); ++i);

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> T(n, vector<int>(n, 0));
    vector<vector<int>> A(n, vector<int>(n, 0));
    vector<vector<int>> T2(n, vector<int>(n, 0));

    for(int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        T[a][b] = T[b][a] = 1;
    }

    for(int i=0; i<m; i++) {
        int c, d;
        cin >> c >> d;
        c--; d--;
        A[c][d] = A[d][c] = 1;
    }
  
    vector<int> P(n);  
    for(int i=0; i<n; i++) P[i] = i;

    do {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                T2[i][j] = T[P[i]][P[j]];
            }
        }
        if(T2 == A) {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(P.begin(), P.end()));

    cout << "No" << endl;
    return 0;
}
