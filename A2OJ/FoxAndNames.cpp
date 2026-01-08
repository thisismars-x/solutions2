#include <ios>
#include <iostream>
#include <stack>
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

// in adj[x] x should be less than all elem in it
vector<int> adj[27];
int vis[27];
stack<int> ans;

void dfs(int i) {
  if(not vis[i]) {
    vis[i] = 1;
    for(int x: adj[i]) dfs(x);
    vis[i] = 2;
    ans.push(i);
  } else if(vis[i] == 1) {
    cout << "Impossible" << endl;
    exit(0);
  }
}

void solve() {

  clr(vis);
  int t; cin >> t;
  vector<string>s(t);
  for(int i = 0; i < t; i++) cin >> s[i];
  for(int i = 1; i < t; i++) {
    int m = min(s[i].size(), s[i-1].size());
    bool st = false;
    for(int j = 0; j < m; j++) {
      if(s[i-1][j] != s[i][j]) {
        adj[s[i-1][j] - 'a'].push_back(s[i][j] - 'a');
        st = true;
        break;
      }
    }
    if(not st) {
      if(s[i-1].size() > s[i].size()) {
        cout << "Impossible" << endl;
        exit(0);
      }
    }
  }
  for(int i = 0; i < 26; i++) if(not vis[i]) dfs(i);
  while(not ans.empty()) {
    cout << (char)(ans.top() + 'a');
    ans.pop();
  }
  

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


