#include <iostream>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;

  // upper triangle
  for(int i = n; i >= 0; i--) {
    string s;
    for(int k = 0; k < 2 * i; k++) s += " ";
    int j = n - i;
    for(int k = 0; k <= j; k++) s += to_string(k) + " ";
    for(int k = j-1; k >=0; k--) s += to_string(k) + " ";
    s.pop_back();
    cout << s << endl;
  }

  // lower triangle
  for(int i = 0; i <= n; i++) {
    string s;
    for(int k = 0; k < 2 * i; k++) s += " ";
    int j = n - i;
    for(int k = 0; k <= j; k++) s += to_string(k) + " ";
    for(int k = j-1; k >=0; k--) s += to_string(k) + " ";
    s.pop_back();
    if(i) cout << s << endl;
  }
}
