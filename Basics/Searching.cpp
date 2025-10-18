#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int n; cin >> n;
  vector<long long int> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];

  long long int target; cin >> target;

  auto it = find(x.begin(), x.end(), target);
  if(it != x.end()) {
    cout << it - x.begin();
  } else cout << -1;

}
