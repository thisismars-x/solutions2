#include<iostream>
using namespace std;

int main() {
  long long int n1, n2, n3, n4; cin >> n1 >> n2 >> n3 >> n4;
  n1 %= 100;
  n2 %= 100;
  n3 %= 100;
  n4 %= 100;

  long long int prod = (n1 * n2 * n3 * n4) % 100;
  if(prod < 10) cout << 0 << prod;
  else cout << prod;

}
