#include <functional>
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

  ll n, q; cin >> n >> q;
  vector<ll> nn(n);
  for(ll i = 0; i < n; i++) cin >> nn[i];
  vector<ll> freq(200005);
  while(q--) {
    ll a, b; cin >> a >> b;
    freq[a-1]++;
    freq[b]--;
  }
  for(ll i = 1; i < n; i++) {
    freq[i] += freq[i-1];
  }
  sort(nn.begin(), nn.end(), greater<ll>());
  sort(freq.begin(), freq.end(), greater<ll>());
  ll ans = 0;
  for(ll i = 0; i < n; i++) {
    ans += nn[i]*freq[i];
  }
  cout << ans << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


