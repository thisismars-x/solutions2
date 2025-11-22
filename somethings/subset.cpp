#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> n{1, 3, 2, 4};
  vector<vector<int>> subsets;

  for(int b = 0; b < (1 << n.size()); b++) {

    vector<int> x;
    for(int i = 0; i < n.size(); i++) {
      if(b & (1 << i)) {
        x.push_back(n[i]); 
      }
    }
    subsets.push_back(x);
  }

  for(auto &sub: subsets) {
    for(auto &elem: sub) cout << elem << " ";
    cout << endl;
  }

  cout << subsets.size() << endl;

}
