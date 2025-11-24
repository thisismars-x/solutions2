#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  string s;
  long long sa = 0, sb = 0;
  while(n--) {
    int t1, t2; cin >> t1 >> t2;
    if((sa + t1) - sb <= 500) {
      sa += t1;
      s += "A";
    } else if(sa - (sb + t2) <= 500) {
      sb += t2;
      s += "G";
    }
  }
  cout << s << endl;
}
