#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long int n, m; cin >> n >> m;
  vector<long long int> s;
  for(int i = 0; i < m; i++) {
    long long int temp; cin >> temp;
    s.push_back(temp);
  }

  long long int sum = s[0] - 1;
  for(int i = 1; i < m; i++) {
    if(s[i] < s[i-1]) {
      long long int sums = s[i] - s[i-1] + n ;
      sum += sums;
    } else {
      long long int sums = s[i] - s[i - 1];
      sum += sums;
    }
  }

  cout << sum << endl;
}
