#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];
  vector<int> y = x;
  reverse(x.begin(), x.end());
  if(equal(x.begin(), x.end(), y.begin(), y.end())) {
    cout << "YES";
  } else cout << "NO";
}
