#include <cassert>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s; cin >> s;
  vector<int> m(26, 0);
  for(auto ch: s) {
    m[ch - 'a'] += 1;
  }
  int steps = 0;
  for(auto n: m) {
    if(n%2 != 0) steps += 1;
  }

  if(steps == 0 or steps%2 != 0) cout << "First\n";
  else cout << "Second\n";
}
