#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n; cin >> n;
  bool flag = false;
  vector<int> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];

  int lim = 1 << n;
  for(int i = 0; i < lim; i++) {
    int sum = 0;
    for(int j = 0; j < n; j++) {
      if((i >> j) & 1) sum += x[j];
      else sum -= x[j];
    }

    if(sum % 360 == 0) flag = true;
  }

  if(flag) cout << "YES";
  else cout << "NO";
}
