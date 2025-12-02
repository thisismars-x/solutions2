#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

bool is_prime(int n) {
  if(n == 0 or n == 1) return false;
  for(int i = 2; i < n; i++) {
    if(n%i == 0) return false;
  }
  return true;
}

int dist[100005]{0};

void init() {

  bool prime[100005];
  prime[0] = false, prime[1] = false;
  for(int i = 2; i < 100005; i++) prime[i] = true;
  for(int i = 0; i * i < 100005; i++) {
    if(prime[i]) {
      for(int j = i*i; j < 100005; j += i) prime[j] = false;
    }
  }

  int last_prime;
  for(int i = 100005-1; i >= 0; i--) {
    if(prime[i]) last_prime = i;
    dist[i] = last_prime - i;
  }
}

void solve() {
  init();

  int n, m; cin >> n >> m;
  vector<vector<int>> table(n, vector<int>(m,0));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> table[i][j];
    }
  }

  int steps = 1e5;
  for(int i = 0; i < n; i++) { // row check
    int nsteps = 0;
    for(int j = 0; j < m; j++) {
      nsteps += dist[table[i][j]];
    }
    steps = min(steps, nsteps);
  }
  for(int j = 0; j < m; j++) { // column check
    int nsteps = 0;
    for(int i = 0; i < n; i++) {
      nsteps += dist[table[i][j]];
    }
    steps = min(steps, nsteps);
  }
  cout << steps << endL;

}

int main() {
  solve();
}
