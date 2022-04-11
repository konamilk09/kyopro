#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(n);
  vector<int> d(n);
  for (int i = 0; i < m; i++) cin >> a[i] >> b[i];
  for (int i = 0; i < m; i++) cin >> c[i] >> d[i];
  
  vector<int> vec(n);  
  for (int i = 0; i < n; i++) vec[i] = i;  

  do {
    for (int i = 0; i < m; i++) cout << " " << vec[i];
    cout << endl;
  } while (next_permutation(vec.begin(), vec.end()));
}
