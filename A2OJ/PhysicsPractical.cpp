#include <cstdio>
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

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int n; cin >> n;
  vector<int> nn(n);
  for(int i = 0; i < n; i++) cin >> nn[i];
  sort(all(nn));
  int ans = n;
  int i = 0, j = 0;
  while(i < n) {
    if(nn[j]*2 >= nn[i]) i++;
    else j++;
    ans = min(ans, n-(i - j));
  }
  cout << ans << endl;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


