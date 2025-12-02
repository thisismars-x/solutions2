#include <ios>
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

void solve() {

  string s1, s2; cin >> s1 >> s2;
  if(s1.length() != s2.length()) {
    cout << "NO\n";
    return;
  }

  int idx = 0;
  while(s1[idx] == s2[idx]) idx++;

  int last_idx = s1.length() - 1;
  while(s1[last_idx] == s2[last_idx]) last_idx--;
  swap(s1[idx], s1[last_idx]);
  if(s1 == s2) cout << "YES\n";
  else cout << "NO\n";
    

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

