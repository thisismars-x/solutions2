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

vector<vector<int>> table;
pair<int, int> coords[105];
bool vis[105];
void dfs(int i) {
  if(vis[i]) return;
  vis[i] = true;
  for(int j = 0; j < table[i].size(); j++) {
    if(not vis[table[i][j]]) dfs(table[i][j]);
  }
}
void solve() {

  int n; cin >> n;  
  for(int i = 0; i < n; i++) cin >> coords[i].first >> coords[i].second;
  table.resize(n);
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(coords[i].first == coords[j].first or coords[i].second == coords[j].second) {
        table[i].push_back(j);
        table[j].push_back(i);
      }
    }
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(not vis[i]) {
      dfs(i);
      ans++;
    }
  }
  cout << ans - 1 << endl;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


