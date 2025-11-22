#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, z; cin >> s >> z;
  for(int i = 0; i < s.size(); i++) {
    if(islower(s[i])) {
      s[i] = char(toupper(s[i]));
    }
    if(islower(z[i])) {
      z[i] = char(toupper(z[i]));
    }
  }

  if(s > z) cout << "1";
  else if (s < z) cout << "-1";
  else cout << "0";
  cout << endl;
}
