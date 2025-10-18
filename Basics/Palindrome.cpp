#include <algorithm>
#include<iostream>
using namespace std;

int main() {
  string s; cin >> s;
  string p = s;
  reverse(p.begin(), p.end());
  if(equal(s.begin(), s.end(), p.begin(), p.end())) cout << "YES";
  else cout << "NO";
}
