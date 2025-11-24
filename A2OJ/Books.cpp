#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long n, t; cin >> n >> t;
  vector<long long> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];
  long long nbooks=0, time=0, j=0;
  for(int i = 0; i < n; i++) {
    time += x[i];
    while(time > t) {
      time -= x[j];
      j++;
    }
    nbooks = max(nbooks, i - j + 1);
  }
  cout << nbooks << endl;
}
