#include <iostream>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  string n;
  for(int i = 0; i < s.size(); i++) {
    if(n.size() >= 2 and s[i] == n[n.size()-1] and s[i] == n[n.size()-2]) continue;
    if(n.size() >= 3 and s[i] == n[n.size()-1] and n[n.size()-2] == n[n.size()-3]) continue;
    n += s[i];
  }
  cout << n << endl;
}
