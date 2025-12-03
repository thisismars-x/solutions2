#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

void solve() {

  int t; cin >> t;
  vector<pair<int, int>> nn(t);
  for(int i = 0; i < t; i++) {
    cin >> nn[i].first >> nn[i].second;
  }
  sort(nn.begin(), nn.end());

  int res = nn[0].second;
  for(int i = 0; i < t; i++) {
    if(res <= nn[i].second) res = nn[i].second;
    else res = nn[i].first;
  }
  cout << res << endL;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

