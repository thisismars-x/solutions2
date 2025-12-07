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
#define clears(v) memset((v), 0, sizeof(v))

vector<vector<bool>> visited;
vector<vector<int>> nn;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int n, m;
ll dfs(int r, int c) {
  visited[r][c] = true;
  ll sum = nn[r][c];

  for(int k = 0; k < 4; k++) {
    int nr = r + dy[k];
    int nc = c + dx[k];
    if(nr >= 0 and nc >= 0 and nr < n and nc < m) {
      if(not visited[nr][nc] and nn[nr][nc]) {
        sum += dfs(nr, nc);
      }
    }
  }
  return sum;
}

void solve() {

  int t; cin >> t;
  while(t--) {
    nn.clear();
    visited.clear();
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
      vector<int> x(m, 0);
      for(int j = 0; j < m; j++) {
        cin >> x[j];
      }
      nn.push_back(x);
    }
    visited.assign(n, vector<bool>(m, false));
    ll ans = 0;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if(not visited[i][j] and nn[i][j]) {
          ans = max(ans, dfs(i, j));
        }
      }
    }
    cout << ans << endL;
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


