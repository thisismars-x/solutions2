#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, a, b; cin >> n >> a >> b;
  int count = 0;
  for(int i = a; i <= n; i++) {
    for(int j = b; j >= 0; j--) {
      if(i + j == n - 1) count++;
    }
  }
  cout << count << endl;
}
