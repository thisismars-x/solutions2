#include<iostream>
using namespace std;

int main() {
  int a, b; cin >> a >> b;
  int max = 2*a - 1;
  if(2*b - 1 > max) max = 2*b - 1;
  else if(a + b > max) max = a + b;
  cout << max << endl;
}
