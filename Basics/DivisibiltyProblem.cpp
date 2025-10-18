#include<iostream>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    long long a, b; cin >> a >> b;
    if(a%b == 0) cout << 0;
    else {
      cout << b - (a%b);
    }

    cout << endl;

  }
}
