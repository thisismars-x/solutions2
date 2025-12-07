#include <climits>
#include <ios>
#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007
#define all(v) (v).begin(), (v).end()
#define clear(v) memset((v), 0, sizeof(v))

void solve() {

  int n; cin >> n;
  vector<pair<ll, ll>> nn(n);
  ll mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
  for(int i = 0; i < n; i++) { 
    cin >> nn[i].first >> nn[i].second;
    mn = min(mn, nn[i].first);
    mx = max(mx, nn[i].second);
  }
  pair<ll, ll> req = {mn, mx};
  auto pos = find(nn.begin(), nn.end(), req);
  if(pos == nn.end()) {
    cout << -1 << endL;
  } else {
    cout << pos - nn.begin() + 1 << endL;
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


