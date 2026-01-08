#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endl '\n'
#define mod 1000000007
#define all(v) (v).begin(), (v).end()
#define clr(v) memset((v), 0, sizeof(v))
#define fin(filename) freopen((filename), "r", stdin)
#define fout(filename) freopen((filename), "w", stdout)

void solve() {

  string a, b, c; cin >> a >> b >> c;  
  for(int i = 0; i < a.size(); i++) {
    auto pos = find(c.begin(), c.end(), a[i]);
    if(pos == c.end()) {
      cout << "NO\n";
      return;
    }
    *pos = '-';
  } 
  for(int i = 0; i < b.size(); i++) {
    auto pos = find(c.begin(), c.end(), b[i]);
    if(pos == c.end()) {
      cout << "NO\n";
      return;
    }
    *pos = '-';
  }
  if(count(c.begin(), c.end(), '-') == c.size()) cout << "YES\n";
  else cout << "NO\n";

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


