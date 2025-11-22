#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t; cin >> t;
  vector<pair<int, int>> s;
  while(t--) {
    int x, y; cin >> x >> y;
    s.emplace_back(x, y);
  }

  int num = 0;

  for(auto &p : s) {

    bool left = false, right = false, up = false, down = false;
    for(auto &q : s) {
      if(q.first == p.first and q.second < p.second) up = true;
      if(q.first == p.first and q.second > p.second) down = true;
      if(q.first < p.first and q.second == p.second) left = true;
      if(q.first > p.first and q.second == p.second) right = true;
    }

    if(left and up and down and right) num += 1;
  }


  cout << num << endl;
}
