#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  auto pos0 = find(s.begin(), s.end(), '0');
  if(pos0 != s.end()) s.erase(pos0);
  else s.erase(s.begin());
  cout << s << endl;
}
