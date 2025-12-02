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

  int t; cin >> t;
  while(t--) {
    int theta; cin >> theta;
    cout << ((360 % (180 - theta) == 0)? "YES" : "NO") << endL;
  }
  

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

