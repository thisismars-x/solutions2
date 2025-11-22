#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, a, b, c; cin >> n >> a >> b >> c;
  long long sum = 0;
  for(int i = 0; i * a <= n; i++) {
    for(int j = 0; i*a + j*b <= n; j++) {
      int rem = n - i*a - j*b;
      if(rem % c == 0) {
        int k = rem / c;
        if(sum < i+j+k) sum = i+j+k;
      }
    }
  }
  cout << sum << endl;
}
