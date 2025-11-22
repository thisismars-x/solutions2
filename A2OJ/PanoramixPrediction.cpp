#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int a, b; cin >> a >> b;
  for(int next_prime = a + 1; ;next_prime++) {
    bool is_prime = true;
    for(int i = 2; i <= sqrt(next_prime); i++) {
      if(next_prime % i == 0) {
        is_prime = false;
        break;
      } 
    }

    if(is_prime) {
      if(b == next_prime) cout << "YES\n";
      else cout << "NO\n";

      break;
    }
  }
}
