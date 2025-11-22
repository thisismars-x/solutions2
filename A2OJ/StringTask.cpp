#include <iostream>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  string ss;
  for(auto ch: s) {
    ch = char(tolower(ch));
    if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'y') {
      //skip
    } else {
      ss += '.'; ss += ch;
    }
  }
  cout << ss << endl;
}
