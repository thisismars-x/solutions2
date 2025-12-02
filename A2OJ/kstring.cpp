#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

void solve() {

  int n; cin >> n;
  string s; cin >> s;
  if(s.length()%n != 0) {
    cout << -1 << endL;
    return;
  }

  int table[26]{0};
  for(int i = 0; i < s.length(); i++) {
    table[s[i] - 'a']++;
  }

  string res;
  for(int i = 0; i < 26; i++) {
    if(table[i] > 0) {
      if(table[i]%n != 0) {
        cout << -1 << endL;
        return;
      }
      for(int k = 0; k < table[i] / n; k++) res += ('a' + i);
    }
  }
  string ress;
  for(int i = 0; i < n; i++) ress += res;
  cout << ress << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


