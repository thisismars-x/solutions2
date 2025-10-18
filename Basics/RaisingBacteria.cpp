#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int res = 0;
  while(n>0) {
    res += n%2;
    n /= 2;
  }

  cout << res;
}
