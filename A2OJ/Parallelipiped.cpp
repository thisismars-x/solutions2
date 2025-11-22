#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int ab, bc, ac; cin >> ab >> bc >> ac;
  int b = sqrt((ab * bc) / ac);
  int a = ab / b, c = ac / a;
  cout << 4 * (a + b + c) << endl;
}
