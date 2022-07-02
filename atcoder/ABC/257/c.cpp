#include <iostream>
#include <vector>
#include <map>
#include <string>
#define rep(i,n) for(int i=0; i<(n); i++)

int main(){
    int n;
    std::string s;
    std::cin >> n >> s;
    std::map<int, std::vector<char>> m;
    int cnt = 0;
    rep(i,n) {
        if(s[i] == '1') cnt++;
    }
    rep(i,n) {
        int w;
        std::cin >> w;
        m[w].push_back(s[i]);
    }
    int ans = cnt;
    for(auto [k,v] : m) {
        for(auto one : v) {
            if(one == '1') cnt--;
            else cnt++;
        }
        ans = std::max(cnt, ans);
    }
    std::cout << ans << std::endl;
}

