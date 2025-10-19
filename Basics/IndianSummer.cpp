#include <algorithm>
#include<iostream>
#include<set>
using namespace std;

int main() {
  int t; cin >> t;

  set<pair<string, string>> x;
  while(t--) {
    string s, ss; cin >> s >> ss;
    x.emplace(s, ss);
  }

  cout << x.size();

}
