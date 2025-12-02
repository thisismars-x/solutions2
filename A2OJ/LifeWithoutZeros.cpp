#include <ios>
#include <iostream>
#include <pstl/glue_algorithm_defs.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

void solve() {

  ll n1, n2; cin >> n1 >> n2;
  string s1 = to_string(n1), s2 = to_string(n2);
  s1.erase(remove(s1.begin(), s1.end(), '0'), s1.end());
  s2.erase(remove(s2.begin(), s2.end(), '0'), s2.end());

  string s3 = to_string(n1 + n2);
  s3.erase(remove(s3.begin(), s3.end(), '0'), s3.end());

  if(stoi(s3) == stoi(s1) + stoi(s2)) cout << "YES\n";
  else cout << "NO\n";
  
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

