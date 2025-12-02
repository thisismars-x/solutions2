#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

#define size 100005 << 1

void solve() {

  int n, k; cin >> n >> k;
  ll table[size], sum[size]{0};
  for(int i = 1; i <= n; i++) {
    cin >> table[i];
    sum[i] = sum[i-1] + table[i];
  }

  ll dp[size][2]{0};
  int idx[size]{0};

  int l = 0, r = 0;
  for(int i = k; i <= n; i++) {
    if(sum[i] - sum[i-k] > dp[i-1][0]) {
      dp[i][0] = sum[i] - sum[i-k];
      idx[i] = i - k;
    } else {
      dp[i][0] = dp[i-1][0];
      idx[i] = idx[i-1];
    }

    if(i >= k + k) {
      if(dp[i-k][0] + sum[i] - sum[i-k] > dp[i-1][1]) {
        dp[i][1] = dp[i-k][0] + sum[i] - sum[i-k];
        l = idx[i-k];
        r = i - k;
      } else dp[i][1] = dp[i-1][1];
    }
  }
  cout << l+1 << " " << r+1 << endL;
  return;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

