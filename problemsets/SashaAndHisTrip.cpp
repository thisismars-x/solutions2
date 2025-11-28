#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {

  int n, v; cin >> n >> v;  
  int total = 0, curr_have = 0, curr = 0;
  for(int i = 1; i < n; i++) {
    if(n-1 == curr_have) break;
    if(i == 1) {
      int cap = min(v, n-1);
      curr_have += cap;
      total += cap;
    }
    else {
      total += i;
      curr_have += 1;
    }
  }
  cout << total << endl;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

