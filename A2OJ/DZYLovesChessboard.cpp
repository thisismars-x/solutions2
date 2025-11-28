#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void solve() {

  int n, m; cin >> n >> m;
  vector<string> s(n);
  for(int i = 0; i < n; i++) cin >> s[i];
  vector<string> result(n);
  string sss;
  for(int j = 0; j < m; j++) sss += ' ';
  for(int i = 0; i < n; i++) {
    result[i] = sss;
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(s[i][j] == '-') {
        result[i][j] = '-';
        continue;
      }
      if(i%2==0) {
        if(j%2==0) result[i][j] = 'B';
        else result[i][j] = 'W';
      } else {
        if(j%2==0) result[i][j] = 'W';
        else result[i][j] = 'B';
      }
    }
  }
  for(auto& elem: result) cout << elem << endl;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

