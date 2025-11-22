#include<iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
  int len, pass; cin >> len >> pass;
  string s; cin >> s;
  while(pass--) {
    for(int i = 0; i < len - 1; i++) {
      if(s[i] == 'B' and s[i + 1] == 'G') {
        swap(s[i], s[i + 1]);
        i += 1;
      }
    }
  }

  cout << s << endl;
}
