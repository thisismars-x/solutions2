#include <iostream>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  int num_lucky = 0;
  for(auto &ch : s) {
    if(ch == '7' or ch == '4') num_lucky += 1;
  }

  if(num_lucky == 7 or num_lucky == 4) cout << "YES\n";
  else cout << "NO\n";
}
