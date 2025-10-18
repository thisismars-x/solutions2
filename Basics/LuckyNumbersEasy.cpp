#include<iostream>
using namespace std;

int main() {
  long long n; cin >> n;
  int count = 0;

  while(true) {
    int n_4 = 0, n_7 = 0;
    string s = to_string(n);
    bool flag = false;
    for(auto x : s) {
      if(x == '4') n_4 += 1;
      else if(x == '7') n_7 += 1;
      else {
        flag = true;
      };
    }

    if(n_4 == n_7 and !flag) {
      cout << n;
      return 0;
    }

    n += 1;
  }
}
