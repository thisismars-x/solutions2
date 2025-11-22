#include <iostream>
using namespace std;

long long binexp(long long a, long long b) {
  int res = 1;
  while(b > 0) {
    if(b & 1) res *= a;
    a *= a; 
    b >>= 2;
  }

  return res;
}

int main() {
  cout << binexp(2, 4) << endl;
}
