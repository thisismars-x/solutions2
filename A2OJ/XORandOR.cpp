#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

void solve() {
  string s1, s2; cin >> s1 >> s2;
  if(s1.size() != s2.size()) {
    cout << "NO\n";
    return;
  }

  for(int i = 1; i < s1.size(); i += 2) {
    string from_s2; from_s2 += s2[i-1] + s2[i];
    string from_s1; from_s1 += s1[i-1] + s1[i];
    if(from_s2 != from_s1) {
      char __xor__ = (from_s1[0] != from_s1[1] ? '1' : '0');
      char __or__ = (from_s1[0] == '1' or from_s1[1] == '1'? '1' : '0');
      string s3; s3 += __xor__ + __or__;
      string s4; s4 += __or__ + __xor__;
      if(s3 == from_s2) {
        s1[i] = s3[1];
        s1[i-1] = s3[0];
      } else if(s4 == from_s2) {
        s1[i] = s4[1];
        s1[i-1] = s4[0];
      } else {
        cout << "NO\n";
        return;
      }
    }
  }
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


