#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define endL '\n'

void solve() {

  int t; cin >> t;
  while(t--) {
    ll n, w; cin >> n >> w;
    vector<ll> nn(n);
    for(int i = 0; i < n; i++) cin >> nn[i];

    bool found = false;
    for(int i = 0; i < n; i++) {
      if(nn[i] >= (w + 1)/2 and nn[i] <= w) {
        cout << 1 << endL << i+1 << endL;
        found = true;
        break;
      }
    }
    if(found) continue;

    vector<ll> ans;
    ll sum = 0;
    for(int i = 0; i < n; i++) {
      if(nn[i] < (w + 1) / 2) {
        sum += nn[i];
        ans.push_back(i+1);
      }
      if(sum >= (w + 1) / 2) {
        found = true;
        break;
      }
    }
    if(found) {
      cout << ans.size() << endL;
      for(auto &elem: ans) cout << elem << " ";
      cout << endL;
    } else cout << -1 << endL;

  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

