#include <cstdlib>
#include<iostream>
#include <set>
#include <string>
using namespace std;

int main() {

  int year; cin >> year;
  while(year++) {
    string s = to_string(year);
    set<char> ss;
    for(auto ch: s) ss.insert(ch);

    if(ss.size() == s.size()) {
      cout << year << endl;
      return 0;
    }

  }
    
}
