#include<iostream>
#include <numeric>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vector<int> x(n);
    for(int i =0 ; i< n; i++) cin >> x[i];

    vector<int> sum(n * (n + 1) / 2);
    int idx = 0;
    for(int i = 0; i < n; i++) {
      for(int j = i; j < n; j++) {
        sum[idx++] = *max_element(x.begin() + i, x.begin() + j + 1);
      }
    }

    for(auto i : sum) cout << i << " ";
    cout << endl;
  }
}
