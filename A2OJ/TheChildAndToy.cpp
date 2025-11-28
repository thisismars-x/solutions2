#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void solve();

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

}

void
solve() {
  int n, m; cin >> n >> m;
  int tbl[n];
  ll sum{0}; 
  for(int i = 0; i < n; i++) cin >> tbl[i];
  for(int i = 0; i < m; i++) {
    int a, b; cin >> a >> b;
    sum += min(tbl[a-1], tbl[b-1]);
  }
  cout << sum << endl;
}
