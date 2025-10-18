#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> l(n, vector<int>(m));
  for(int i = 0; i < n; i++) {
    vector<int> temp(m);
    for(int j = 0; j < m; j++) {
      cin >> temp[j];
    }

    l[i] = temp;
  }

  int target; cin >> target;
  bool found = false;
  for(auto i : l) {
    auto it = find(i.begin(), i.end(), target);
    if(it != i.end()) found = true;
    if(found) break;
  }

  if(found) cout << "will not take number";
  else cout << "will take number";
}
