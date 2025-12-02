#include <cstdlib>
#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

ll moduli(ll n) {
  return (n%mod + mod)%mod;
}

void solve() {

  ll f1, f2, n; cin >> f1 >> f2 >> n;  
  ll table[6] = {f1, f2, f2-f1, -f1, -f2, f1-f2};
  if(n%6 == 0) n = 6;
  else n %= 6;
  
  cout << moduli(table[n - 1]) << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

