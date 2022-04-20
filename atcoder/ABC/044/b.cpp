/*abc044b*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  cin >> s;
  int n = s.size();
  map<char, int> moji;
  for(int i=0; i<n; i++) {
    moji[s[i]]++;
  }
  for(auto cnum : moji) {
    if(cnum.second%2 != 0) {
		cout << "No" << endl;
    	return 0;
  	}
  }
  cout << "Yes" << endl;
  return 0;
}
