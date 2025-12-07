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
#define clear(v) memset((v), 0, sizeof(v))

int adj[1005];
int visited[1005];

void dfs(int from) {

  if(visited[from]) {
    cout << from << endL;
    return;
  }
  visited[from] = 1;
  dfs(adj[from]);
}

void solve() {

  clear(adj);

  int n; cin >> n;  
  for(int i = 1; i <= n; i++) {
    cin >> adj[i];
  }

  for(int i = 1; i <= n; i++) {
    clear(visited);
    dfs(i);
  }


}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


