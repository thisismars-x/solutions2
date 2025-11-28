#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {

  int t; cin >> t;
  while(t--) {
    int l; string s; cin >> l >> s;
    reverse(s.begin(), s.end());
    int total = 0;
    while(s.back() == '0' and s.size() > 0) s.pop_back();
    for(int i = 1; i < s.size(); i++) {
      if(s[i] == s[i-1]) total += 1;
    }
    cout << total << endl;
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

