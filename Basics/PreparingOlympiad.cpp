#include <algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main() {
  long long l,r;
  int n,x; cin >> n >> l >> r >> x;
  vector<int>v(n);
  for(int i = 0; i < n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int lim = 1 << n;

  int n_ways = 0;
  for(int i = 0; i < pow(2, n); i++) {
    int temp = 0, m = 99999999, M = -1;

    for(int j = 0; j < n; j++) {

      if(i & 1 << j) {
        temp += v[j];
        m = min(m, v[j]);
        M = max(m, v[j]);
      }
    }

    if(temp >= l and temp <= r and (M - m) >= x) n_ways += 1;
  }

  cout << n_ways;

}
