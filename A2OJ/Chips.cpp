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
  int i = 0;
  while(true) {
    i %= n;
    i += 1;
    if(m < i) {
      cout << m << endL;
      return;
    }
    m -= i;
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


