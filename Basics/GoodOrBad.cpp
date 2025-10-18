#include <algorithm>
#include<iostream>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    string s; cin >> s;
    bool found = (s.find("010") != string::npos || s.find("101") != string::npos);
    if(found) cout << "Good";
    else cout << "Bad";

    cout << endl;
  }
}
