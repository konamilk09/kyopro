#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i<(int)(n); i++)

int main() {
    int N, Q;
    cin >> N >> Q; 
    vector<int> a(N); // a[i]=数字iの位置
    vector<int> b(N); // b[i]=位置iの数字
    rep(i,N) {a[i] = i; b[i] = i;}
    rep(q,Q) {
        int x;
        cin >> x;
        x--;

        if(a[x]<N-1){
            a[b[a[x]+1]]--; // xの右の数字の位置が一つ左へ
            a[x]++; // xの位置が1つ右へ
            swap(b[a[x]],b[a[x]-1]);
        }
        else {
            a[b[a[x]-1]]++; // xの右の数字の位置が一つ左へ
            a[x]--; // xの位置が1つ右へ
            swap(b[a[x]],b[a[x]+1]);
        }
    }

    rep(i,N) cout << b[i]+1 << " ";
    cout << endl;
    return 0;
}
