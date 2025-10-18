#include <cstdlib>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int n; cin >> n;
  vector<vector<int>> l(n, vector<int>(n));

  for(int i = 0; i < n; i++) {
    vector<int> temp;
    for(int j = 0; j < n; j++ ) {
      int temps; cin >> temps;
      temp.push_back(temps);
    }

    l[i] = temp;
  }

  int main_d = 0;
  for(int i = 0; i < n; i++) {
    main_d += l[i][i];
  }

  int sec_d = 0;
  for(int i = 0; i < n; i++ ) {
    sec_d += l[i][n - 1 - i];
  }

  cout << abs(main_d - sec_d) << endl;
}
