#include<iostream>
using namespace std;

bool reach_value(long long curr, long long reach) {
  if(curr == reach) return true;
  else if(curr > reach) return false;
  else {
    return reach_value(curr * 10, reach) || reach_value(curr * 20, reach);
  }
}

int main() {
  int n; cin >> n;
  while(n--) {
    long long x; cin >> x;
    cout << (reach_value(1, x)? "YES\n" : "NO\n");
  }
}
