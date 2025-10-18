#include<iostream>
#include <utility>
using namespace std;

int main() {
  int n1, n2; cin >> n1 >> n2;
  if(n1 > n2) {
    swap(n1, n2);
  }

  int gcd = n1;
  for(; gcd >= 1; gcd--) {
    if((n1 % gcd == 0) and (n2 % gcd == 0)) break;
  }

  cout << gcd << endl;

}
