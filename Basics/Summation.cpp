#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main() {
  int n; cin >> n;
  vector<long long int> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];
  long long int sum = accumulate(x.begin(), x.end(), 0ll);
  cout << abs(sum);
}
