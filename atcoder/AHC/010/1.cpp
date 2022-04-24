///ahc010
/**
 * ERROR解けていない
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)

///入力を受け取る
vector<string> init() {
    vector<string> t(30);
    rep(i,30) cin >> t[i];
    return t;
}

///輪を作る左上のマスを見つける
int search(vector<string> &t, int si, int sj){

    ///輪に必要なマスの探索用
    vector<int> dj = {0, 1, 0, 1, 2, 2};
    vector<int> di = {0, 0, 1, 2, 1, 2};

    ///マスを全探索
    for(int i = si; i < 28; i++) {
        for(int j = sj; j < 28; j++) {
        
            bool flag = true;
            rep(k,6) {
                char a = t[i+di[k]][j+dj[k]];
                int b = int(a - '0');
                if(b >= 6) flag = false;
            }

            int c = int(t[i+2][j+2] - '0');
            if(c != 4 || c != 5) flag = false;

            if(flag) return i*30+j;
        }
    }
    return 0;
}

///ここを接続するためのマスの回転数を返す
/**
 * 
 *     ***
 *     *
 */
char rotate1(int t) {
    if(t==0) return '2';
    if(t==1) return '1';
    if(t==2) return '0';
    if(t==3) return '3';
    if(t==4) return '0';
    if(t==5) return '1';
}

///こうするための回転数を返す
/**
 * 
 *  ***
 *    *
 */
char rotate2(int t) {
    if(t==0) return '1';
    if(t==1) return '0';
    if(t==2) return '3';
    if(t==3) return '2';
    if(t==4) return '1';
    if(t==5) return '0';
}

///こうするための回転数を返す
/** 
 *     *
 *     ***
 *  
 */
char rotate3(int t) {
    if(t==0) return '3';
    if(t==1) return '2';
    if(t==2) return '1';
    if(t==3) return '0';
    if(t==4) return '1';
    if(t==5) return '0';
}

///こうするための回転数を返す
/** 
 *    *
 *  ***
 *  
 */
char rotate4(int t) {
    if(t==0) return '0';
    if(t==1) return '3';
    if(t==2) return '2';
    if(t==3) return '1';
    if(t==4) return '0';
    if(t==5) return '1';
}

///こうするための回転数を返す
/** 
 *    *
 *  *** ***
 *      *
 */
char rotate5(int t) {
    if(t==4) return '0';
    if(t==5) return '1';
}

///こうするための回転数を返す
/** 
 *      *
 *  *** ***
 *    *
 */
char rotate6(int t) {
    if(t==4) return '1';
    if(t==5) return '0';
}

int main() {
    string ans = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
    
    vector<string> t = init();

    int ring1 = search(t, 0, 0);
    int j = ring1%30;
    int i = (ring1-j) / 30;
    
    vector<int> di = {0, 1, 0, 1, 2, 2};
    vector<int> dj = {0, 0, 1, 2, 1, 2};

    char a = t[i+di[0]][j+dj[0]];
    int b = int(a - '0');
    ans[ring1 + di[0]*30 + dj[0]] = rotate1(b);

    a = t[i+di[1]][j+dj[1]];
    b = int(a - '0');
    ans[ ring1 + di[1]*30 + dj[1] ] = rotate2(b);

    a = t[i+di[2]][j+dj[2]];
    b = int(a - '0');
    ans[ ring1 + di[2]*30 + dj[2] ] = rotate3(b);

    a = t[i+di[3]][j+dj[3]];
    b = int(a - '0');
    ans[ ring1 + di[3]*30 + dj[3] ] = rotate2(b);

    a = t[i+di[4]][j+dj[4]];
    b = int(a - '0');
    ans[ ring1 + di[4]*30 + dj[4] ] = rotate3(b);

    a = t[i+di[5]][j+dj[5]];
    b = int(a - '0');
    ans[ ring1 + di[5]*30 + dj[5] ] = rotate4(b);

    a = t[i+1][j+1];
    b = int(a - '0');
    ans[ ring1 + di[6]*30 + dj[6] ] = rotate6(b);

    cout << ans << endl;

    return 0;
}
