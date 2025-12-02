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

  int n, k; cin >> n >> k;
  for(int i = n; i > n-k; i--) cout << i << " ";
  for(int i = 1; i <= n-k; i++) cout << i << " ";
  cout << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

