#include<iostream>
using namespace std;

int main() {

  long long int a, b, res;
  char op;

  cin >> a >> op >> b;
  char _; cin >> _;
  cin >> res;

  if(op == '+') {
    if(a + b == res) cout << "Yes\n";
    else cout << a+b << endl;
  } else if(op == '-') {
    if(a-b == res) cout << "Yes\n";
    else cout << a-b << endl;
  } else if(op == '*') {
    if(a*b == res) cout << "Yes\n";
    else cout << a*b << endl;
  }

}
