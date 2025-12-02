#include <cstring>
#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define endL '\n'

// [][friend|notfriend]
int dp[200005][2];

void solve() {

  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vector<int> nn(n);
    for(int i = 0; i < n; i++) cin >> nn[i];

    if(n==1) {
      cout << nn[0] << endL;
      continue;
    }

    for(int i = 0; i < n; i++) dp[i][0] = dp[i][1] = 1e8;

    dp[0][0] = nn[0];
    dp[1][0] = nn[1] + dp[0][0];
    dp[1][1] = dp[0][0];

    for(int i = 2; i < n; i++) {
      dp[i][0] = min(dp[i][0], dp[i-2][1] + nn[i-1] + nn[i]);
      dp[i][0] = min(dp[i][0], dp[i-1][1] + nn[i]);
      dp[i][1] = min(dp[i][1], dp[i-2][0]);
      dp[i][1] = min(dp[i][1], dp[i-1][0]);
    }

    cout << min(dp[n-1][0], dp[n-1][1]) << endL;
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

