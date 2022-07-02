/* 
 * abc257b
 * 
 */
#include <iostream>
#include <vector>
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int main() {
    int n, k, q;
    std::cin >> n >> k >> q;
    std::vector<int> space(n, 0);
    rep(i,k) {
        int a;
        std::cin >> a;
        a--;
        space[a] = 1;
    }
    rep(i,q) {
        int l;
        std::cin >> l;
        int idx=0;
        rep(j,n) {
            if(space[j] == 1) {
                l--;
            }
            if(l == 0) {
                idx = j;
                break;
            }
        }
        if(idx == n-1) continue;
        if(space[idx]==1 && space[idx+1]==0) {
            space[idx] = 0;
            space[idx+1] = 1;
        }
    }
    rep(i,n) {
        if(space[i]==1) std::cout << i+1 << " ";
    }
    std::cout << std::endl;
    return 0;
}
