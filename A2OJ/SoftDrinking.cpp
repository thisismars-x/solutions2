#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, l, k, c, d, p, nl, np; cin >> n >> l >> k >> c >> d >> p >> nl >> np;
  cout << 
    min(
      int(l*k) / nl, 
      min( int(c*d),
      int(p / np))  
    ) / n << endl;
}
