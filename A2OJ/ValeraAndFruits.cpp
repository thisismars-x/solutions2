#include <cstdlib>
#include <cstring>
#include <ios>
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define endL '\n'

ll table[3005];

void solve() {

  memset(table, 0, sizeof(table)); 
  int n, k; cin >> n >> k;
  for(int i = 0; i < n; i++) {
    ll day, cost; cin >> day >> cost;
    table[day] += cost;
  }

  ll a, b, total{0};
  for(int i = 1; i <= 3001; i++) {
    a = i - 1;
    b = i;

    if(table[a] > k) {
      table[a] -= k;
      total += k;
    }

    else {
      total += table[a];
      ll remainder = k - table[a];

      if(remainder > table[b]) {
        total += table[b];
        table[b] = 0;
      } else {
        table[b] -= remainder;
        total += remainder;
      }
    }
  }
  cout << total << endL;


}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

