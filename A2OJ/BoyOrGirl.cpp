#include <iostream>
#include <set>
using namespace std;

int main() {
  string s; cin >> s;
  set<char> ss;
  for(auto &ch: s) ss.insert(ch);

  if(ss.size() % 2) cout << "IGNORE HIM!\n";
  else cout << "CHAT WITH HER!\n";
}
