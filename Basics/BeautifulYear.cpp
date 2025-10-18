#include<iostream>
#include <set>
using namespace std;

bool is_unique(int x) {
  string s = to_string(x);
  set<char> y(s.begin(), s.end());
  if(s.size() == y.size()) return true;
  return false;
}

int main() {
  int t; cin >> t;
  for(int i = t + 1; ; i++) {
    if(is_unique(i)) {
      cout << i;
      break;
    }
  }
}
