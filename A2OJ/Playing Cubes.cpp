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

  int n, m; cin >> n >> m;  
  int p = min(n, m);
  cout << n + m - p - 1 <<  " " << p << '\n';

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

