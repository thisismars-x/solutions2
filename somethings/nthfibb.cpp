#include <cmath>
#include <iostream>
using namespace std;

long long nth_fibb(long long n) {
  return (
    pow(
      ( 1 + sqrt(5) ) / 2
    , n) - 
    pow(
      ( 1 - sqrt(5) ) / 2
    , n)
  ) / sqrt(5);
}

int main() {
  for(int i = 0; i < 20; i++) {
    cout << nth_fibb(i) << endl;
  }
}
