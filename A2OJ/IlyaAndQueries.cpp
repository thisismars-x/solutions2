#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

void solve() {

  string s; cin >> s;
  int dp[s.size()];
  for(int i = 0; i < s.size(); i++) dp[i] = 0; 
  for(int i = 1; i < s.size(); i++) {
    if(s[i-1] == s[i]) {
      dp[i] = dp[i-1] + 1;
    } else dp[i] = dp[i-1];
  }
  

  int n; cin >> n;
  while(n--) {
    int l, r; cin >> l >> r;
    cout << dp[r-1] - dp[l-1] << endL;
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

