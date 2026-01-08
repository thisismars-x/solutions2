#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endl '\n'
#define mod 1000000007
#define all(v) (v).begin(), (v).end()
#define clr(v) memset((v), 0, sizeof(v))
#define fin(filename) freopen((filename), "r", stdin)
#define fout(filename) freopen((filename), "w", stdout)

vector<vector<ll>> dp(2001, vector<ll>(2001, -1));
vector<int> visited[2010];

ll __dp(ll a, ll b) {

  if(b == 1) return 1;
  if(dp[a][b] != -1) return dp[a][b];
  ll ans = 0;
  for(int i = 0; i < visited[a].size(); i++) {
    ans += __dp(visited[a][i], b-1);
    ans %= mod;
  }
  dp[a][b] = ans;
  return ans;

}

void solve() {
  
  for(int i = 1; i < 2010; i++) {
    for(int j = i; j < 2010; j+=i) {
      visited[j].push_back(i);
    }
  }
  ll a, b, ans = 0; cin >> a >> b;
  for(int i = 1; i <= a; i++) {
    ans += __dp(i, b);
    ans %= mod;
  }
  cout << ans << endl;
  

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

