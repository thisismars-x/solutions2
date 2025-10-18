#include<iostream>
using namespace std;

void print_till(int n, int curr) {
  cout << curr;
  if(curr == 1) return;
  else cout << " ";
  print_till(n, curr - 1);
}

int main() {
  int n; cin >> n;
  print_till(n, n);
}
