#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> sum1(N, 0);
    vector<int> sum2(N, 0);
    vector<int> A2(N);
    for(int i=0; i<N; i++){
      int a;
      cin >> a;
      if(i==0) sum1[i]=a;
      else sum1[i] = sum1[i-1]+a;
    }

    for(int i=0; i<N; i++)
      cin >> A2[i];
    
    for(int i=N-1; i>=0; i--){
      if(i==N-1) sum2[i] = A2[i];
      else sum2[i] = sum2[i+1]+A2[i];
    }
    int ma=-1;
    for(int i=0; i<N; i++){
      ma=max(ma, sum1[i]+sum2[i]);
    }
    cout << ma << endl;
    return 0;
}
