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

  int a, b, c, d; cin >> a >> b >> c >> d;  
  if(c > 0) {
    a = max(3 * (a / 10), (a - ((a/250) * c)));
  }
  if(d > 0) {
    b = max(3 * (b / 10), (b - ((b/250) * d)));
  }
  if(a==b) cout << "Tie" << endl;
  else if(a > b) cout << "Misha" << endl;
  else cout << "Vasya" << endl;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


