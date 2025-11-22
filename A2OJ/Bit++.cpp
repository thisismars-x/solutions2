#include <iostream>
#include <string>
using namespace std;

int main() {
  int t; cin >> t;
  int res = 0;
  while(t--) {
    string s; cin >> s;
    if(s == "++X" or s == "X++") res += 1;
    else res -= 1;
  }

  cout << res << endl;
}
