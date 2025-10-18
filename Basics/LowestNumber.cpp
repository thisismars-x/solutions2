#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];

  cout << *min_element(x.begin(), x.end()) << " ";
  cout << find(x.begin(), x.end(), *min_element(x.begin(), x.end())) - x.begin() + 1;
}
