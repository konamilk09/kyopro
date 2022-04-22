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
    ll x=1000000000000000000;
    ll j = 1000000;
    ll i = 0;
    // iとjの組み合わせは0-1000000の中から2つ数字を選ぶこと
    // i<=jとし、iを増やして、jを減らして全探索すると考える
    // f(i,j)がnより大きい時f(i,j)を小さくしたいのでjを減らす
    // f(i,j)がnより小さい時f(i,j)を大きくしたいのでiを増やす
    // これでなぜ確実に答えが見つかるのか
    /* →例えば(i,j)=(1,6(max))でn=9だとする。6<9よりf(i,j)を大きくしたい。i=1のままにしてもjは小さくなってf(i,j)は小さくなる一方だから、答えは必ずiを増やした方にある
    */
    while(i <= j) {
        ll tmp = f(i,j);
        if(tmp>=n) {
            x = min(x, tmp);
            j--;
        }
        else i++;
    }
    cout << x << endl;
    return 0;
}
