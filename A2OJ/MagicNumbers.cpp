#include <ios>
#include <iostream>
#include <pstl/glue_algorithm_defs.h>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007
#define all(v) (v).begin(), (v).end()

void solve() {

  string s; cin >> s;
  while(s.find("144") != string::npos) {
    auto pos = s.find("144");
    s.replace(pos, 3, "xxx");
  }
  while(s.find("14") != string::npos) {
    auto pos = s.find("14");
    s.replace(pos, 2, "xx");
  }
  while(s.find("1") != string::npos) {
    auto pos = s.find("1");
    s.replace(pos, 1, "x");
  }
  string temp;
  for(int i = 0; i < s.size(); i++) temp += 'x';
  cout << (s==temp? "YES": "NO") << endL;


}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


