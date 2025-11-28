#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void solve() {

  int a, b, c; cin >> a >> b >> c;
  if(a > b+c or b > a+c or c > a+b) {
    cout << "Impossible\n";
    return;
  }
  for(int i = 0; i <= a; i++) {
    int aa = a - i, bb = b - i;
    if(aa + bb == c) {
      cout << i << " " << bb << " " << aa << endl;
      return;
    }
  }
  cout << "Impossible\n";

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

