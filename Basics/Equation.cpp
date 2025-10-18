#include <cmath>
#include<iostream>
using namespace std;

int main() {
  int x, n; cin >> x >> n;
  long long int sum = 0;
  for(int i = 0; i <= n; i += 2) {
    sum += pow(x, i);
  }

  cout << -1 + sum << endl;
}
