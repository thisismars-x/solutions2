#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

void solve() {

  ll n; cin >> n;
  ll table[n];  
  for(ll i = 0; i < n; i++) cin >> table[i];
  ll m; cin >> m;
  pair<ll, ll> box[m];
  for(ll i = 0; i < m; i++) {
    ll a, b; cin >> a >> b;
    box[i] = {a, b};
  }
  ll curr_w = 0, curr_h = 0;
  for(ll i = 0; i < m; i++) {
    if(curr_w < box[i].first) {
      curr_h = max(curr_h, table[box[i].first - 1]);
      cout << curr_h << endL;
      curr_w = box[i].first;
      curr_h += box[i].second;
    } else {
      cout << curr_h << endL;
      curr_h += box[i].second;
    }
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

