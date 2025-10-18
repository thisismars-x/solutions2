#include <cmath>
#include<iostream>
using namespace std;

int main() {
  unsigned long long int n; cin >> n;
  bool prime = true;
  for(int i = 2; i <= pow(n, 0.5); i++) {
    if(n % i == 0) prime = false;
  }

  cout << (prime? "YES": "NO");
}
