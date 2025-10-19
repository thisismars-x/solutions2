#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

  string s; cin >> s;
  vector<tuple<int, int, char>> x;
  int prefix = 0;
  for(int i = 0; i < s.size(); i++) {
    x.emplace_back(prefix, -i, s[i]); 
    if(s[i] == '(') prefix += 1;
    else prefix -= 1;
  }

  sort(x.begin(), x.end());
  for(auto &[_, __, c] : x) cout << c;

}
