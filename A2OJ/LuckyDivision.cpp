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

  int n; cin >> n;  
  // 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 777, 774, 747, 744
  if(
  n%4 == 0 or
  n%7 == 0 or
  n%44 == 0 or
  n%47 == 0 or
  n%74 == 0 or
  n%77 == 0 or
  n%444 == 0 or
  n%447 == 0 or
  n%474 == 0 or
  n%477 == 0 or
  n%777 == 0 or
  n%774 == 0 or
  n%747 == 0 or
  n%744 == 0
  ) {
    cout << "YES\n";
  } else cout << "NO\n";

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


