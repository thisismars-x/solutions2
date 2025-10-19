#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];
  int n1; cin >> n1;
  int n2, n3; cin >> n2 >> n3;

  x.erase(x.begin() + n1 - 1);
  x.erase(x.begin() + n2 - 1, x.begin() + n3 - 1);

  cout << x.size() << endl;
  for(auto i : x) cout << i << " ";
}
