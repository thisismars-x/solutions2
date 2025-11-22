#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main() {
  string s; cin >> s;
  string t; cin >> t;
  reverse(s.begin(), s.end());
  if(t == s) cout << "YES\n";
  else cout << "NO\n";
}
