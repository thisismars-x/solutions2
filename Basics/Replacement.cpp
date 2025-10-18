#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];
  replace_if(x.begin(), x.end(), [](int n) { return n > 0; }, 1);
  replace_if(x.begin(), x.end(), [](int n) { return n < 0; }, 2);

  for(int i = 0; i < n; i++) cout << x[i] << " ";
}
