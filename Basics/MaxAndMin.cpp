#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
  vector<long long int> n(3);
  for(int i = 0; i < 3; i++) cin >> n[i];

  cout << *min_element(n.begin(), n.end()) << " " << *max_element(n.begin(), n.end());
  cout << endl;
}
