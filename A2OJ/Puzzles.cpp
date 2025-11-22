#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<int> s(m);
  for(int i = 0; i < m; i++) cin >> s[i];
  sort(s.begin(), s.end());
  int min = s[n - 1] - s[0];
  for(int i = 1; i <= m-n; i++) {
    if(min > s[n - 1 + i] - s[i]) {
      min = s[n - 1 + i] - s[i];
    }
  }
  cout << min << endl;
}
