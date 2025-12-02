#include <climits>
#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define endL '\n'

ll inf = LONG_LONG_MAX / 4;

void solve() {

  int t; cin >> t;
  while(t--) {
  int n, k; cin >> n >> k;
  vector<ll> table(n+1);
  for(int i = 1; i <= n; i++) cin >> table[i];

  vector<vector<ll>> dp(n+1, vector<ll>(k+1, inf));
  for(int i = 0; i <= k; i++) {
    dp[0][i] = 0;
  }

  for(int i = 1; i <= n; i++) {
    for(int j = 0; j <= k; j++) {
      dp[i][j] = dp[i-1][j] + table[i];
      
      ll num = table[i];

      for(int l = i-1; l >= max(1, i-j); l--) {
        num = min(num, table[l]);
        int cnt = i - l;
        if(cnt <= j) {
          dp[i][j] = min(dp[i][j],
                         dp[l-1][j-cnt] + (cnt + 1) * num
          );
        }
      }
    }
  }
  ll ans = inf;
  for(int i = 0; i <= k; i++) {
    ans = min(ans, dp[n][i]);
  }
  cout << ans << endL;
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

