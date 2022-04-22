/// abc246d
/*
 * 尺取り法
 * 二分探索
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

long long f(long long a, long long b) {
    return a*a*a + a*a*b + a*b*b + b*b*b;
}

int main() {
    ll n;
    cin >> n;
    long long x=1000000000000000000;
    long long j = 1000000;
    for(ll i=0; i<=1000000; i++) {
        x = f(i,j);
        while(f(i,j) >= n && j >= 0) {
            x = min(x, f(i,j));
            j--;
        }
    }
    cout << x << endl;
    return 0;
}
