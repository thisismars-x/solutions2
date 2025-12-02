#include <ios>
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

void solve() {

  int n, m; cin >> n >> m;
  vector<int> nn(n);
  for(int i = 0; i < n; i++) cin >> nn[i];
  int table[n];
  memset(table, 0, sizeof(table));

  set<int> counts;
  counts.insert(nn[n-1]);
  table[n-1] = 1;

  for(int i = n-2; i >= 0; i--) {
    if(counts.count(nn[i]) == 0) {
      counts.insert(nn[i]);
      table[i] = 1 + table[i+1];
    } else table[i] = table[i+1];
  }
  while(m--) {
    int temp; cin >> temp;
    cout << table[temp-1] << endL;
  }


}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


