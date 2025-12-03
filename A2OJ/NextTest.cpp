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

void solve() {

  int n; cin >> n;
  vector<int> nn(n);
  for(int i = 0; i < n; i++) cin >> nn[i];
  sort(all(nn));
  int ans = 1;
  for(int i = 0; i < n; i++) {
    if(nn[i] != ans) break;
    ans++;
  }
  cout << ans << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


