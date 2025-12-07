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

  ll y, k, n; cin >> y >> k >> n;  
  bool any = false;
  for(int i = k; i <= n; i += k) {
    if(i <= y) continue;
    cout << i - y << endL;
    any = true;
  }
  if(not any) cout << -1 << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


