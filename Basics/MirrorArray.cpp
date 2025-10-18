#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> l(n, vector<int>(m));
  for(int i = 0; i < n; i++) {
    vector<int> temp;
    for(int i = 0; i < m; i++) {
      int temps; cin >> temps;
      temp.push_back(temps);
    }

    l[i] = (temp);
  }

  for(auto v: l) {
    reverse(v.begin(), v.end());
    for(auto x : v) cout << x << " ";
    cout << endl;
  }
}
