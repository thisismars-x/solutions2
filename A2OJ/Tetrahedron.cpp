#include <iostream>
using namespace std;

int main() {
  long long n; cin >> n;
  long long tbl[n + 1];
  tbl[1] = 0, tbl[2] = 3;
  for(int i = 3; i <= n; i++) {
    tbl[i] = 2*tbl[i-1] + 3*tbl[i-2];
    tbl[i] %= 1000000007;
  }
  cout << tbl[n] << endl;
}
