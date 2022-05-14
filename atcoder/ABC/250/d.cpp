/* 
 * abc250d
 * 
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

// max以下の素数の配列を返す
vector<int> getPrimes(int max){
    vector<int> primes;
    // 素数かどうかを記録する。素数でないときにfalse
    vector<bool> ifprime(max+1,true); 
    for(int i=2; i<=max; i++) {
        if(ifprime[i]) primes.push_back(i);
        for(int p : primes) {
            ll np = p*i;
            if(np>max) break;
            ifprime[np] = false;
        }
    }
    return primes;
}

int main() {
    ll n;
    cin >> n;

    // qを考える。q*q*q<=n
    int cbrtN = cbrt(n);
    
    // q=(q*q*q<=n)の素数
    vector<int> primes = getPrimes(cbrtN);
    
    // psum[i]=i以下の素数の個数。psum[0]=0
    vector<int> psum(1,0);
    for(int i=1, p=2, pi=0; i<=cbrtN; i++) {
        // i番目までの素数の数を数える。まずはi-1番目の数を持っておく
        int cnt = psum[psum.size()-1]; 
        // i番目が素数pなら
        if(i==p) { 
            cnt++; // i番目までの素数の数は+1
            pi++; // 次の素数のインデックス
            if(pi<(int) primes.size()) p = primes[pi]; // 次の素数に更新
            else p = cbrtN+1; // 次の素数をiの範囲外にしておくことで、それまで素数のカウントは増えない
        }
        psum.push_back(cnt);
    }

    // ありうるqそれぞれについて、pの数を考える
    ll ans = 0;
    for(int q : primes) {
        // p<qより、p=q-1かn/q/q/q。n/q/q/qがq-1より大きいときp<=q-1とqでkが作れる
        int pmax = min(q-1LL, n/q/q/q); 
        int pcnt = psum[pmax];
        ans += pcnt;
    }

    cout << ans << endl;
    return 0;
}
