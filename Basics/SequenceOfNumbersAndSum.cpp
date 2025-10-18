#include<iostream>
#include <utility>
using namespace std;

int main() {
  while(true) {
    int n1, n2; cin >> n1 >> n2;
    if(n1 > n2) swap(n1, n2);
    if(n1 <= 0) break;

    int sum = 0;
    for(int i = n1; i <= n2; i++) {
      cout << i << " ";
      sum += i;
    }

    cout << "sum =" << sum << endl;
  }
}
