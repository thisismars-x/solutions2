#include <ios>
#include <iostream>
#include <numeric>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 998244353

ll ceil(ll num) {
  return (num+1)/2;
}

void solve() {

  ll n; cin >> n;
  vector<ll> nn(n);
  for(ll i = 0; i < n; i++) cin >> nn[i];
  ll max_sum = accumulate(nn.begin(), nn.end(), 0) + 2;

  vector<vector<ll>> dp(max_sum, vector<ll>(max_sum, 0));
  dp[0][0] = 1;
  for(ll i = 0; i < n; i++) {
    vector<vector<ll>> ndp = dp;
    for(ll j = 0; j < max_sum; j++) {
      for(ll sum = 0; sum < max_sum; sum++) {
        if(dp[j][sum] == 0) continue;

        ndp[max(j, nn[i])][sum+nn[i]] += dp[j][sum]%mod;
      }
    }
    swap(dp, ndp);
  }

  ll ans = 0;
  for(ll m = 0; m < max_sum; m++) {
    for(ll sum = 0; sum < max_sum; sum++) {
      ans += max(m, ceil(sum)) * dp[m][sum] % mod;
    }
  }
  cout << ans << endL;

  

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

