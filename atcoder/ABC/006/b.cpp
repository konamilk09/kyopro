/*ABC006-b*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int N, L;
    cin >> N >> L;
    
    string line;
    getline(cin, line); 
    // 空白も文字列の中に受け取るのにgetlineを使う
    // これはただの改行。cinの後にバッファに改行コードが残っているので、それを受け取る。
    
    vector<string> A(L);
    rep (i, L) getline(cin, A[i]);

    getline(cin, line);
    int p;
    rep(i, N*2-1) if(line[i]=='o') p=i;

    for(int i=L-1; i>=0; --i) {
        string a=A[i];
        if(p>0 && a[p-1]=='-') p-=2;
        else if(p<(N*2-1) && a[p+1]=='-') p+=2;
    }

    printf("%d\n", p/2+1);

    return 0;
}
