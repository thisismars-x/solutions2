#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define endL '\n'

void solve() {

  int r, g, b; cin >> r >> g >> b;
  int min_ = min(r, min(g, b));
  min_ = min(min_, 2); // if(min_ >= 3) we can just take 3r/g/b
  int ans = -1;
  for(int i = 0; i <= min_; i++) {
    int R = r-i, G = g-i, B = b-i, res=i;
    res += R/3 + G/3 + B/3;
    ans = max(ans, res);
  }
  cout << ans << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

