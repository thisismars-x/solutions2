#include<iostream>
using namespace std;

int main() {
  
  int n, a, b; cin >> n >> a >> b;
  int net = 0;

  for(int i = 1; i <= n; i++) {
    string s = to_string(i);

    int sum = 0;
    for(auto x: s) {
      sum += x - '0';
    }

    if(sum >= a and sum <= b) net += i;
  }

  cout << net << endl;

}
