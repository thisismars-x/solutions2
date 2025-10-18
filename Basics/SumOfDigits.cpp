#include<iostream>
using namespace std;

string sums(string& n) {
  int sum = 0;
  for(auto i : n) sum += i - '0';
  return to_string(sum);
}

void solve() {
  string s; cin >> s;
  int res = 0;
  while(s.size() >= 2) {
    res += 1;
    s = sums(s);
  }

  cout << res;

}


int main() {
  solve();
}
