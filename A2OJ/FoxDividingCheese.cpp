#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int a, b; cin >> a >> b;
  int tbl[3*2]{0};
  
  while(a%2 == 0) {
    a /= 2;
    tbl[0]++;
  }

  while(a%3 == 0) {
    a /= 3;
    tbl[1]++;
  }

  while(a%5 == 0) {
    a /= 5;
    tbl[2]++;
  }

  while(b%2 == 0) {
    b /= 2;
    tbl[3]++;
  }

  while(b%3 == 0) {
    b /= 3;
    tbl[4]++;
  }

  while(b%5 == 0) {
    b /= 5;
    tbl[5]++;
  }

  if(a-b != 0) {
    cout << "-1\n";
    return 0;
  }

  cout << abs(tbl[0] - tbl[3]) + abs(tbl[1] - tbl[4]) + abs(tbl[2] - tbl[5]) << endl;
}
