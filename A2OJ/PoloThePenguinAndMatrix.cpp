#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
  int n, m, d; cin >> n >> m >> d;
  vector<int> s(n*m);
  for(int i = 0; i < n*m; i++) cin >> s[i];
  for(int i = 0; i < n*m; i++) {
    if((s[i] - s[0]) % d != 0) {
      cout << -1 << endl;
      return 0;
    }
  }
  vector<int> p(n*m);
  for(int i = 0; i < n*m; i++) p[i] = s[i] / d;
  sort(p.begin(), p.end());
  int median = p[n*m/2];
  long long moves = 0;
  for(int x: p) moves += abs(x - median);
  cout << moves << endl;
}
