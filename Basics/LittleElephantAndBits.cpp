#include <algorithm>
#include<iostream>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  if(s.size() == 1) {
    cout << s;
    return 0;
  }

  int n_zero = count(s.begin(), s.end(), '0');

  if(n_zero != 0) {
    s.erase(s.find('0'), 1);
  } else {
    auto x = s.find('1');
    if(x != string::npos)
      s.erase(x, 1);
  }

  long long number = stoll(s.c_str());
  cout << number;
}
