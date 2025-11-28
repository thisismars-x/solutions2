#include <iostream>
using namespace std;

int fibbn[100];

// using dp/topdown
int fibb(int n) {
  if(n <= 1) fibbn[n] = n; 
  else fibbn[n] = fibb(n-1) + fibb(n-2);
  return fibbn[n];
}

int main() {
  for(int i = 0; i < 10; i++) cout << fibb(i) << " ";
  cout << endl;
}
