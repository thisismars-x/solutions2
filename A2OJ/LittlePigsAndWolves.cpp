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

  int n, m; cin >> n >> m;
  vector<string> s(n);
  for(int i = 0; i < n; i++) cin >> s[i];
  int ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(s[i][j] == 'W') { 
        if(j-1 >= 0 and s[i][j-1] == 'P') ans++, s[i][j-1] = '.';
        else if(j+1 < m and s[i][j+1] == 'P') ans++, s[i][j+1] = '.';
        else if(i-1 >= 0 and s[i-1][j] == 'P') ans++, s[i-1][j] = '.';
        else if(i+1 < n and s[i+1][j] == 'P') ans++, s[i+1][j] = '.';
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


