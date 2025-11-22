#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  priority_queue<int> a, b;
  for(int i = 0; i < n; i++) {
    int temp = s[i] - 'a';
    a.push(temp);
  }
  for(int i = n; i < 2 * n; i++) {
    int temp = s[i] - 'a';
    b.push(temp);
  }
  priority_queue<int> c = a, d = b;

  // less order
  bool is_less = true;
  for(int i = 0; i < n; i++) {
    int a_top = a.top(); a.pop();
    int b_top = b.top(); b.pop();
    if(a_top >= b_top) {
      is_less = false;
      break;
    }
  }

  if(is_less) {
    cout << "YES\n";
    return 0;
  }

  // more
  bool is_more = true;
  for(int i = 0; i < n; i++) {
    int c_top = c.top(); c.pop();
    int d_top = d.top(); d.pop();
    if(c_top <= d_top) {
      is_more = false;
      break;
    }
  }

  if(is_more) {
    cout << "YES\n";
    return 0;
  }

  cout << "NO\n";
}
