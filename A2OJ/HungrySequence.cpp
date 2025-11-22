#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;

  int times = 0;
  for(int i = n; times < n; times++, i++) {
    cout << 2*i + 1 << " ";
  }

  cout << endl;
}
