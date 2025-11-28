#include <iostream>
#include <string>
using namespace std;

int main() {

  string s; cin >> s;
  long long sum = 0;
  int times = 0;
  while(s.size() > 1) {
    for(auto ch: s) sum += ch - '0';
    s = to_string(sum);
    sum = 0;
    times++;
  }
  cout << times << endl;

}
