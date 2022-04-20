/*caddi2018-b*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, h, w;
  cin >> n >> h >> w;
  vector<int> a(n);
  vector<int> b(n);
  int ans = 0;
  for(int i=0; i<n; i++) {
    cin >> a[i] >> b[i];
    if(a[i]>=h && b[i]>=w) ans++;
  }
  cout << ans << endl;
}