#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {

  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int n1 = 0, n2 = 0;
    while(n--) {
      int temp; cin >> temp;
      if(temp == 1) n1 += 1;
      else n2 += 1;
    }
    int total = 1*n1 + 2*n2;
    if(total%2 != 0) {
      cout << "NO" << endl;
      continue;
    }
    bool done = false;
    for(int i = 0; i <= n1 and not done; i++) {
      for(int j = 0; j <= n2; j++) {
        if(i*1 + j*2 == total / 2) {
          cout << "YES" << endl;
          done = true;
          break;
        }
      }
    }
    if(not done) cout << "NO" << endl;
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

