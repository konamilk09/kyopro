#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

int main(){
    int N;
    vector<int> a(N);
    int min1 = INF, min2 = INF;
    for(int i = 0; i < N; i++) {
        cin >> a[i];
        if(a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } else if(a[i] < min2) {
            min2 = a[i];
        }
    }
    cout << min2 << endl;
    return 0;
}
