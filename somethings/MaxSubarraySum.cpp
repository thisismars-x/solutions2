#include <algorithm>
#include <iostream>
using namespace std;

int main() {

  int arr[] {1, 2, 3, -100, 3, 4, 5, -1000, 100, 200, 300};
  int sum = 0, best = 0;
  for(int i = 0; i < 11; i++) {
    sum = max(arr[i], sum + arr[i]);
    best = max(sum, best);
  }
  cout << best << '\n';

}
