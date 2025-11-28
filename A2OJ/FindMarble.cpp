#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve();

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

}

void solve() {
  int n, s, t; cin >> n >> s >> t;
  vector<int> nn(n);
  for(int i=0; i<n; i++) cin >> nn[i];
  for(int i=0; i<n; i++) {
    if(s==t) {
      cout << i << endl;
      return;
    }
    s = nn[s-1];
  }
  cout << -1 << endl;
}
