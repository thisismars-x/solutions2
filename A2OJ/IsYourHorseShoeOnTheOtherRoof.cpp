#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  set<int> nn;
  for(int i = 0; i < 4; i++) {
    int temp; cin >> temp;
    nn.insert(temp);
  }

  cout << 4 - nn.size() << endl;
}
