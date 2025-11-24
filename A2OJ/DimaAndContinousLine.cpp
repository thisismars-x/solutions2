#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

int main() {
  int n; cin >> n;
  int tbl[n];
  for(int i = 0; i < n; i++) cin >> tbl[i];
  for(int i = 0; i < n; i++) {
    int a = 0, b = 0;
    for(int j = i + 2; j < n; j++) {
      if(
        (tbl[j]>tbl[i] and tbl[j]>tbl[i+1]) // left
        || (tbl[j]<tbl[i] and tbl[j]<tbl[i+1]) //right
      ) {
        a += 1;
      } else b += 1;
    }
    if(a and b) { cout << "yes\n"; return 0; }
  }
  cout << "no\n";
}
