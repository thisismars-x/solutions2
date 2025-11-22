#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) {
  return (a * b) / gcd(a, b);
}

int main() {
  cout << gcd(2, 3) << endl;
  cout << lcm(2, 3) << endl;
}
