#include <algorithm>
#include<iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];

  cout << *max_element(x.begin(), x.end()) << endl;
}
