#include <ios>
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void solve() {

  int n; cin >> n;
  vector<int> nn(n);
  for(int i = 0; i < n; i++) cin >> nn[i];
  sort(nn.begin(), nn.end());
  cout << nn[n-1] << " ";
  for(int i = 1; i < n-1; i++) cout << nn[i] << " ";
  cout << nn[0] << endl;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

}

