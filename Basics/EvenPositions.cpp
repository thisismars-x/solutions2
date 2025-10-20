#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr)
#define Endl '\n'
#define rep(i, a, b) for(int i = a; i < b; i++)
#define MAIN int main() { fastIO; solve(); }

using namespace std;

void solve() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    string s; cin >> s;
    int res = 0;
    for(int i = 0; i < n; i += 2) {
      if(s[i + 1] == ')') res += 1;
      else res += 3;
    }
    cout << res << Endl;
  }
}

MAIN
