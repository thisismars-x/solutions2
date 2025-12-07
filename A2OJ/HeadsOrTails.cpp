#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007
#define all(v) (v).begin(), (v).end()

void solve() {

  int x, y, a, b; cin >> x >> y >> a >> b;
  vector<pair<int, int>> nn;
  x -= a; y -= b;
  while(true) {
    if(a > b) {
      nn.push_back({a, b});
      for(int i = 1; i <= y; i++) {
        if(b + i < a) {
          nn.push_back({a, b+i});
        } else break;
      }
    }
    if(x > 0) {
        x--;
        a++;
    } else break;
  }
  cout << nn.size() << endL;
  for(auto& p: nn) cout << p.first << " " << p.second << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


