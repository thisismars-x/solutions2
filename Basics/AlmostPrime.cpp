#include<iostream>
using namespace std;

bool is_almost_prime(int n) {
  int c = 0;
  for(int i = 2; i*i <= n; i++) {
    if(n % i == 0) {
      c += 1;
      while(n%i == 0) {
        n /= i;
      }
    }
  }

  if(n > 1) c += 1;
  return c == 2;
}

int main() {
  int n; cin >> n;
  int x = 0;
  for(int i = 2; i <= n; i++) {
    if(is_almost_prime(i)) x += 1;
  }
  cout << x;
}
