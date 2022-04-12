#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;
    bool flag = true;
    for (int i = 0; i < 3; i++)
        if (N[i] != N[i + 1]) flag = false;
    if (flag)
        cout << "SAME" << endl;
    else
        cout << "DIFFERENT" << endl;
    return 0;
}
