#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define endL '\n'

// [sum][subset-includes]
int dp[501][501], a[501];


void solve() {

  int n, k; cin >> n >> k;
  for(int i = 1; i <= n; i++) cin >> a[i];
  sort(a+1, a+n+1);

  dp[0][0] = 1;
  for(int i = 1; i <= n; i++) {
    for(int j = k; j >= a[i]; j--) {
      for(int l = j - a[i]; l >= 0; l--) {
        if(dp[j-a[i]][l]) {
          dp[j][l] = 1;
          dp[j][l+a[i]] = 1;
        }
      }
    }
  }

  vector<int> ans;
  for(int i = 0; i <= k; i++) {
    if(dp[k][i]) ans.push_back(i);
  }

  cout << ans.size() << endL;
  for(auto &elem: ans) cout << elem << " ";
  cout << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

