#include<iostream>
using namespace std;

long long int factorial(int n) {
  if(n == 0) return 1;
  return n * factorial(-1 + n);
}

int main() {

  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    cout << factorial(n) << endl;
  }

}
