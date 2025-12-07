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
#define clear(v) memset((v), 0, sizeof(v))

char table[505][505];

void solve() {
  clear(table);
  int n, m; cin >> n >> m;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      cin >> table[i][j];
    }
  }

  bool flag = false;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      if(table[i][j] == 'S') {
        if(table[i-1][j] == 'W') flag = true;
        else if(table[i][j-1] == 'W') flag = true;
        else if(table[i+1][j] == 'W') flag = true;
        else if(table[i][j+1] == 'W') flag = true;
      } else if(table[i][j] == '.') table[i][j] = 'D';
      if(flag) {
        cout << "No\n";
        return;
      }
    }
  }

  cout << "Yes\n";
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) cout << table[i][j];
    cout << endL;
  }
  

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


