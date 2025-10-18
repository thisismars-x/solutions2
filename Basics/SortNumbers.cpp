#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  
  vector<int> n(3), m(3);
  for(int i = 0; i < 3; i++) cin >> n[i];
  m = n; 

  sort(n.begin(), n.end());
  for(int i : n) cout << i << endl;
  cout << endl;

  for(int i : m) cout << i << endl;
  
}
