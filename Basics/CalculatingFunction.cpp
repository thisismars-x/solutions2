#include<iostream>
using namespace std;

int main() {
  long long n; cin >> n;
  long long sum = 0;
  if((n&1) == 0) sum = n / 2;
  else sum = - ((n + 1) / 2);

  cout << sum;


}
