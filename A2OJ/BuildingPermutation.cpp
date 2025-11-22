#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<long long> p(n);
  for(int i = 0; i < n; i++) cin >> p[i];
  sort(p.begin(), p.end());
  long long total = 0;
  for(int i = 1; i <= n; i++) {
    if(p[i - 1] < i) total += i - p[i-1];
    else total += p[i - 1] - i;
  }
  cout << total << endl;
}
