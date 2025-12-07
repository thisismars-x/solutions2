#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007
#define all(v) (v).begin(), (v).end()
#define clear(v) memset((v), 0, sizeof(v))

void solve() {

  string s; cin >> s;  

  bool str[5]; // hello 
  for(int i = 0; i < 5; i++) str[i] = false;

  for(int i = 0; i < s.size(); i++) {
    if(str[0] == false and s[i] == 'h') {
      str[0] = true;
    }
    else if(str[0] and str[1] == false and s[i] == 'e') {
      str[1] = true;
    }
    else if(str[0] and str[1] and str[2] == false and s[i] == 'l') {
      str[2] = true;
    }
    else if(str[0] and str[1] and str[2] and str[3] == false and s[i] == 'l') {
      str[3] = true;
    }
    else if(str[0] and str[1] and str[2] and str[3] and str[4] == false and s[i] == 'o') {
      str[4] = true;
    }
  }

  if(str[0] and str[1] and str[2] and str[3] and str[4]) cout << "YES\n";
  else cout << "NO\n";


}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


