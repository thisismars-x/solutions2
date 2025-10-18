#include <algorithm>
#include<iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];

  vector<int> y;
  for(int i = 0; i < n; i += 2) y.push_back(x[i]);
  sort(y.begin(), y.end(), [](const int a, const int b) { return a > b; });
  for(auto it: y) cout << it << " ";
}
