#include <iostream>
using namespace std;

int main() {
  int t; cin >> t;
  int max = -1;
  int current_total = 0;
  while(t--) {
    int a, b; cin >> a >> b;
    current_total -= a;
    current_total += b;
    if(current_total > max) max = current_total;
  }

  cout << max << endl;

}
