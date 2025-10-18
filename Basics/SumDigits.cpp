#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int sum = 0;
  for(auto i: s) {
    sum += i -'0';
  }

  cout << sum << endl;
}
