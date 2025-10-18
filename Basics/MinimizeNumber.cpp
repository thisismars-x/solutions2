#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];

  int divide = 0;

  while(all_of(x.begin(), x.end(), [](const int n) { return n%2 == 0; })) {
    divide += 1;
    for(int i = 0; i < n; i++) x[i] /= 2;
  }

  cout << divide << endl;

}
