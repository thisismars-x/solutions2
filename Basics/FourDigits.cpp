#include<iostream>
using namespace std;

int main() {
  string s; cin >> s;
  for(int i = 0 ; i < 4 - s.size(); i++) {
    cout << 0;
  }
  cout << s;
}
