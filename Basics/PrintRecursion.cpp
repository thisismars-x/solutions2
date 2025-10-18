#include<iostream>
using namespace std;

void print_till(int n, int curr) {
  cout << "I love Recursion\n";
  if(n == curr) return;
  print_till(n, curr + 1);
}

int main() {
  int n; cin >> n;
  print_till(n, 1);
}
