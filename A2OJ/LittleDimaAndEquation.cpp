#include <cmath>
#include <ios>
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

#define ll long long
#define upto 10e9

ll sumdigits(ll x) {
    ll s = 0;
    while (x) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

void solve() {
  ll a, b, c;
  cin >> a >> b >> c;

  vector<ll> ans;
  for (ll s = 1; s <= 81; s++) {
    ll val = 1;
    for (int i = 0; i < a; i++) val *= s;

    ll x = b * val + c;

    if (x > 0 && x < 1e9 && sumdigits(x) == s)
        ans.push_back(x);
  }
  cout << ans.size() << "\n";
  sort(ans.begin(), ans.end());
  for (ll x : ans) cout << x << " ";
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

}

