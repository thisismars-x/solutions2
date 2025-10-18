#include<iostream>
#include<vector>
using namespace std;

int main() {
  string s; cin >> s;
  vector<int> res(26, 0);

  for(auto i : s) res[i - 'a'] += 1;

  for(int i = 0; i < 26; i++) {
    if(res[i] != 0) {
      cout << char(i + 'a') << " : " << res[i] << endl;
    }
  }

}
