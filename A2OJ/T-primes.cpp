#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  while(n--) {
    long long a; cin >> a;
    if(a == 1) { cout << "NO\n"; continue; }
    if(a == 4) { cout << "YES\n"; continue; }
    long long sqrtt = sqrt(a);
    if(sqrtt * sqrtt != a or sqrtt % 2 == 0) {
      cout << "NO\n";
      continue;
    }
    bool cond = false;
    for(int i = 2; i <= sqrt(sqrtt); i++) {
      if(sqrtt % i == 0) {
        cond = true;
        break;
      }
    }
    if(cond) cout << "NO\n";
    else cout << "YES\n";
  }


}

