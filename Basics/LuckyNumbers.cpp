#include<iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
  int a, b; cin >> a >> b;

  bool none = true;
  for(int i = a; i <= b; i++) {

    string s = to_string(i);
    int cnt = count_if(s.begin(), s.end(), [](char ch) { return (ch != '4') and (ch != '7');});

    if(cnt == 0) {
      cout << s << " ";
      none = false;
    }

  }

  if(none) cout << -1;

}
