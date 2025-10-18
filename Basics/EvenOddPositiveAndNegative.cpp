#include <algorithm>
#include<iostream>
#include <vector>
using namespace std;

int main() {
  int t; cin >> t;
  vector<long int> x(t);
  for(int i = 0; i < t; i++) cin >> x[i];

  int positive = count_if(x.begin(), x.end(), [](int n) { return n >0; });
  int negative = count_if(x.begin(), x.end(), [](int n) { return n <0; });
  int even = count_if(x.begin(), x.end(), [](int n) { return n%2 == 0; });


  cout << "Even: " << even << endl;
  cout << "Odd: " << t - even << endl;
  cout << "Positive: " << positive << endl;
  cout << "Negative: " << negative << endl;


}
