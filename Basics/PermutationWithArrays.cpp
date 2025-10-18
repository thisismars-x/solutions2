#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> x(n);
  vector<int> y(n);
  for(int i = 0; i < n; i++) cin >> x[i];
  for(int i = 0; i < n; i++) cin >> y[i];
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  if(equal(x.begin(), x.end(), y.begin(), y.end())) cout << "yes";
  else cout << "no";
}
