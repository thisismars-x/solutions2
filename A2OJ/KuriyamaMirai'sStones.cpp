#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007
#define all(v) (v).begin(), (v).end()

// 0 meaning without sort
// 1 meaning with sort
ll dp[100002][2];

void solve() {

  int n; cin >> n;  
  vector<int> nn(n+1);
  for(int i = 1; i <= n; i++) cin >> nn[i];
  dp[0][0] = 0, dp[1][0] = nn[1];
  for(int i = 2; i <= n; i++) {
    dp[i][0] += dp[i-1][0] + nn[i]; 
  }
  vector<int> mm = nn;
  sort(all(mm));
  dp[0][1] = 0, dp[1][1] = mm[1];
  for(int i = 2; i <= n; i++) {
    dp[i][1] += dp[i-1][1] + mm[i]; 
  }
  int m; cin >> m;
  while(m--) {
    int t, l, r; cin >> t >> l >> r;
    if(t==1) {
      cout << dp[r][0] - dp[l][0] + nn[l] << endL;
    } else {
      cout << dp[r][1] - dp[l][1] + mm[l] << endL;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


