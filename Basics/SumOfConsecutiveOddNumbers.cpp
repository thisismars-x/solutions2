#include<iostream>
#include <utility>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {

    int n1, n2; cin >> n1 >> n2;
    int sum = 0;

    if(n1 > n2) {
      swap(n1, n2);
    }

    for(int i = n1 + 1; i < n2; i++) {
      if(i % 2 != 0) sum += i;
    }

    cout << sum << endl;

  }
}
