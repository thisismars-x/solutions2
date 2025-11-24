#include <cstring>
#include <iostream>
using namespace std;

#define WT 105
long long tbl[WT][2];

#define MOD 1000000007

int main() {
  int n, k, d; cin >> n >> k >> d;

  memset(tbl, 0, sizeof(tbl));
  tbl[0][0] = 1;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= k and j <= i; j++) {
      if(j >= d) {
        tbl[i][1] = (tbl[i][1] + tbl[i-j][0]) % MOD;
        tbl[i][1] = (tbl[i][1] + tbl[i-j][1]) % MOD;
      } else {
        tbl[i][1] = (tbl[i][1] + tbl[i-j][1]) % MOD;
        tbl[i][0] = (tbl[i][0] + tbl[i-j][0]) % MOD;
      }
    }
  }
  cout << tbl[n][1] << endl;

}
