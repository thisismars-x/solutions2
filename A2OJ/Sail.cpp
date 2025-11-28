#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void solve() {

  long long t, sx, sy, ex, ey; cin >> t >> sx >> sy >> ex >> ey;
  long long tbl[4]{0}; // north south west east
  if(ey > sy) tbl[0] = ey - sy;
  if(ey < sy) tbl[1] = sy - ey;
  if(ex < sx) tbl[2] = sx - ex;
  if(ex > sx) tbl[3] = ex - sx;
  int total = tbl[0] + tbl[1] + tbl[2] + tbl[3];
  string s; cin >> s;
  int steps = 1;
  for(auto &ch: s) {
    if(ch == 'N') tbl[0] -= 1;
    else if(ch == 'S') tbl[1] -= 1;
    else if(ch == 'W') tbl[2] -= 1;
    else if(ch == 'E') tbl[3] -= 1;

    if(tbl[0] <= 0 and tbl[1] <= 0 and tbl[2] <= 0 and tbl[3] <= 0) {
      cout << steps << endl;
      return;
    }
    steps++;
  }
  cout << -1 << endl;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

}

