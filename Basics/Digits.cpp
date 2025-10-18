#include <algorithm>
#include<iostream>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    string s; cin >> s;
    reverse(s.begin(), s.end());
    for(auto x : s) cout << x << " ";
    cout << endl;
  }
}
