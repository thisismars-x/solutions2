#include <ios>
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007
#define all(v) (v).begin(), (v).end()

void solve() {

  int n; cin >> n;
  vector<int> nn(n);
  for(int i = 0; i < n; i++) cin >> nn[i];
  int ans = 0, d = 0;
  for(int i = 0; i < n; i++) {
    if(nn[(i + 1) % n] < nn[i]) d++;
    else if(d != 0 and nn[(i + 1) % n] >= nn[i]) ans++;
  }
  if(d>=2) cout << -1;
  else cout << ans;
  cout << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


