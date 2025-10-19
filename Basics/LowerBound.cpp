#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  vector<int> x(n);
  for(int i = 0 ; i < n ; i++) cin >> x[i];
  sort(x.begin(), x.end());

  cin >> n;
  while(n--) {
    int p ; cin >> p;
    auto it = lower_bound(x.begin(), x.end(), p);
    if(it != x.end() and *it == p) cout << "Yes " << it - x.begin() + 1 << '\n';
    else cout << "No " << it - x.begin() + 1 << '\n';
  }
}
