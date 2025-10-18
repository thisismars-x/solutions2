#include <cmath>
#include<iostream>
using  namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    long long n; cin >> n;

    long long sum = n * (n + 1) / 2;
    long long p = 1;
    while(p <= n) {
      sum -= 2  * p;
      p <<= 1;
    }

    cout << sum << endl;
  

  }
}
