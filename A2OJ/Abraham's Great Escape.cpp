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

void solve() {

  int n, k; cin >> n >> k;
  if(n*n - k == 1) {
    cout << "NO\n";
    return; 
  }
  cout << "YES\n";
  if(n*n - k == 0) {
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) cout << "U";
      cout << endL;
    }
    return;
  }
  if(k == 0) {
    for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= n/2; j++) {
        cout << "RL";
      }
      if(n%2) cout << "L";
      cout << endL;
    }
    return;
  }

  int flag = 0, i, j;
  for(i = 1; i <= n; i++) {
    for(j = 1; j <= n; j++) {
      cout << "U";
      k--;
      if(k == 0) { 
        flag = 1;
        break;
      }
    }
    if(flag) {
      if(i == n) {
        int q = (n - j) % 2;
        for(int p = 1; p <= (n-j)/2; p++) cout << "RL";
        if(q) cout << "L";
        cout << endL;
        return;
      }
      while(j < n) {
        cout << "D";
        j++;
      }
      cout << endL;
      break;
    }
    cout << endL;
  }
  for(i += 1; i <= n; i++) {
    for(j = 1; j <= n/2; j++) cout << "RL";
    if(n%2) cout << "L";
    cout << endL;
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while(t--) {
    solve();
  }
}


