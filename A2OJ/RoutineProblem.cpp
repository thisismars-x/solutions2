#include <ios>
#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

void solve() {

  int a, b, c, d; cin >> a >> b >> c >> d;  
  a *= d, b *= c;
  if(a > b) swap(a, b);
  a = b - a;
  c = gcd(a, b);
  cout << a/c << "/" << b/c << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


