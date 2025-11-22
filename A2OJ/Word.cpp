#include <cctype>
#include <iostream>
using namespace std;

int main() {
  string s; cin >> s;
  int count_uppercase = 0;
  for(auto &ch: s) {
    if(isupper(ch)) 
      count_uppercase += 1;
  }

  if(count_uppercase > (s.size() / 2)) {
    for(auto &ch: s) cout << char(toupper(ch));
  } else {
    for(auto &ch: s) cout << char(tolower(ch));
  }

  cout << endl;
}
