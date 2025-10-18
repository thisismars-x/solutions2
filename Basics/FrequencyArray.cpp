#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main() {
  int a, b; cin >> a >> b;
  vector<int> x(a);
  vector<int> times(b, 0);
  for(int i = 0; i < a; i++) cin >> x[i];

  for(auto i: x) {
    times[i - 1] += 1;
  }

  for(auto i: times) cout << i << endl;

}
