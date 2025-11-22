#include <cmath>
#include <iostream>
#include <set>
using namespace std;

int divisor_tbl[1000005];
void generate_tbl() {
  for(int i = 1; i <= 1000000; i++) {
    for(int j = i; j <= 1000000; j += i) {
      divisor_tbl[j] += 1;
    }
  }
}

int main() {
  generate_tbl();
  int a, b, c; cin >> a >> b >> c;
  long long sum = 0;
  for(int i = 1; i <= a; i++) {
    for(int j = 1; j <= b; j++) {
      for(int k = 1; k <= c; k++) {
        sum += divisor_tbl[i*j*k];
      }
    }
  }

  cout << sum % 1073741824 << endl;
}
