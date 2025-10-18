#include <bitset>
#include<iostream>
#include<cmath>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    long long int n; cin >> n;
    bitset<32> x(n);

    long long int p = 0;
    for(int i = 0; i < x.count(); i++) {
      p += pow(2, i);
    }

    cout << p << endl;


  }
}
