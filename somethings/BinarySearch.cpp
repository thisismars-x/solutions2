#include <iostream>
using namespace std;

int main() {
  int arr[] { 1, 2, 3, 4, 5, 6, 7 };
  int a = 0, b = 7, x = 3;
  while(a <= b) {
    int k = (a + b) / 2;
    if(arr[k] == x) {
      cout << "found " << x << '\n';
      return 0;
    }
    if(arr[k] > x) {
      b = k-1;
    } else a = k+1;
  }
  cout << "did not find " << x << '\n';
}
