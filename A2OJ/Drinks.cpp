#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  int n; cin >> n; int t = n;
  double sum = 0;
  while(t--) {
    int temp; cin >> temp;
    sum += temp;
  }

  printf("%.6f\n", sum / n);
}
