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
  vector<string> students(n);
  for(int i = 0; i < n; i++) cin >> students[i];
  
  // check each student individually
  int ans = 0;
  for(int i = 0; i < n; i++) {
    for(int cat = 0; cat < m; cat++) {
      bool found = true;
      for(int j = 0; j < n; j++) {
        if(i == j) continue; //same
        if(students[i][cat] < students[j][cat]) {
          found = false;
          break;
        }
      }
      if(found) {
        ans++;
        break;
      }
    }
  }
  cout << ans << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


