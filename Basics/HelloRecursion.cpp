#include<iostream>
using namespace std;

int main() {
  int t; cin >> t;
  for(int i = 1; i <= t; i++) {
    int sum = 0;
    int n; cin >> n;
    while(n--) {
      int temp; cin >> temp;
      sum += temp;
    }

    cout << "Case " << i << ": " << sum << endl;
  }
}
