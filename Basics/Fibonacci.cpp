#include<iostream>
using namespace std;

int fibb(int n) {
  if(n == 1) return 0;
  else if(n == 2) return 1;
  else return fibb(n-1) + fibb(n-2);
}

int main() {
  int n; cin >> n;
  cout << fibb(n);
}
