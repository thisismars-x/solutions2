#include <ios>
#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

void solve() {

  ll n, k; cin >> n >> k;
  vector<ll> nn(n);
  for(ll i = 0; i < n; i++) cin >> nn[i];

  for(int i = 0; i < n; i++) {
    if(k == 0) break;
    if(nn[i] < 0) {
      nn[i] *= -1;
      k--;
    }
  }

  ll mn = 0;
  if(k%2 != 0) {
    mn = *min_element(nn.begin(), nn.end());
  }

  cout << accumulate(nn.begin(), nn.end(), 0) - 2*mn << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

