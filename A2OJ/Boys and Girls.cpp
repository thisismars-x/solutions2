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

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  
  int n, m; cin >> n >> m;
  if(n > m) {
    for(int i = 0; i < m; i++) cout << "BG";
    for(int i = 0; i < n-m; i++) cout << "B";
  } else {
    for(int i = 0; i < n; i++) cout << "GB";
    for(int i = 0; i < m-n; i++) cout << "G";
  }
  cout << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


