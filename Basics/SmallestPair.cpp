#include <cmath>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vector<long long> x(n);
    vector<long long> sum;  
    for(int i = 0 ; i < n; i++) cin >> x[i];
    for(int i = 0; i < n; i++) {
      for(int j = i + 1; j < n; j++) {
        sum.push_back(x[i] + x[j] + j - i);
      }
    }

    cout << *min_element(sum.begin(), sum.end()) << endl;

  }
}
