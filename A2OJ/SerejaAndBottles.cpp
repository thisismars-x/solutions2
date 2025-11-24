#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<pair<int, int>> nn(n);
  for(int i = 0; i < n; i++)
  {
    int a, b; cin >> a >> b;
    nn[i] = {a, b};
  }
  int total_opened = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j) continue;
      if(nn[i].first == nn[j].second) {
        total_opened++;
        break;
      }
    }
  }
  cout << n - total_opened << endl;

}
