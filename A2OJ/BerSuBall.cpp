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

// why?
void solve() {

  int n, m; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  cin >> m;
  int b[m];
  for(int i = 0; i < m; i++) cin >> b[i];
  sort(a, a+n);
  sort(b, b+m);
  int ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(abs(a[i] - b[j]) < 2) {
        ans++;
        b[j] = 10000;
        break;
      }
    }
  }
  cout << ans << endl;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}
