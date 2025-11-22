#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long int n; cin >> n;
  vector<long long int> m(n);
  for(long long int i = 0; i < n; i++) cin >> m[i];
  sort(m.begin(), m.end());
  long long int max_diff = m[n - 1] - m[0];

  cout << max_diff << " ";
  if(m[n-1] == m[0]) {
    cout << n * (n - 1) / 2 << endl;
  } else {
    cout << count(m.begin(), m.end(), m[n-1]) * count(m.begin(), m.end(), m[0]) << endl;
  }

}
