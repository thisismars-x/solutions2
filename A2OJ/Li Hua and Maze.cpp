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

  ll t; cin >> t;
  while(t--) {
    ll n, m; cin >> n >> m;
    ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int pt1 = 4;
    if(x1 == 1 || x1 == n) pt1 -= 1;
    if(y1 == 1 || y1 == m) pt1 -= 1;
    int pt2 = 4;
    if(x2 == 1 || x2 == n) pt2 -= 1;
    if(y2 == 1 || y2 == m) pt2 -= 1;
    cout << min(pt1, pt2) << endL;
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


