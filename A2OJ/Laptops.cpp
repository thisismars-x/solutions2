#include <functional>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {

  int n; cin >> n;
  priority_queue<pair<int, int>> nn;
  for(int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;
    nn.push({a, b});
  }
  for(int i = 0; i < n-1; i++) {
    auto [a, b] = nn.top(); nn.pop();
    auto [aa, bb] = nn.top(); nn.pop();
    if(aa < a and bb > b) {
      cout << "Happy Alex\n";
      return 0;
    }
    nn.push({aa, bb});
  }
  cout << "Poor Alex\n";

}
