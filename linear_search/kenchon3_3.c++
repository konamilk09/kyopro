#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

int main(){
    int N;
    vector<int> a(N);
    int max = -INF, min = INF;
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < N; i++) {
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }
    cout << max-min << endl;
    return 0;
}
