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

void solve() {

  ll r, g, b, ans; cin >> r >> g >> b;
  ans = (r + g + b) / 3;
  ans = min(ans, r + g);
  ans = min(ans, r + b);
  ans = min(ans, b + g);
  cout << ans << endl;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


