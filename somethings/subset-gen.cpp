#include <cassert>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int arr[] {1, 2, 3, 4, 5, 6, 7}; // 2^7 subsets
  vector<vector<int>> subsets;
  for(int i = 0; i < (1 << 7); i++) {
    vector<int> ss;
    for(int j = 0; j < 7; j++) {
      if(i & (1 << j)) ss.push_back(arr[j]);
    }
    subsets.push_back(ss);
  }
  assert(subsets.size() == pow(2, 7));
}
