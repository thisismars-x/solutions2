#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  long long n;
  cin >> n;

  string s;
  long long temp = n;
  while (temp > 0) {
      s.push_back((temp % 2) + '0');
      temp /= 2;
  }
  reverse(s.begin(), s.end()); 
  bool pal = equal(s.begin(), s.begin() + s.size() / 2, s.rbegin());

  if (pal && (n % 2 != 0)) cout << "YES\n";
  else cout << "NO\n";

}
