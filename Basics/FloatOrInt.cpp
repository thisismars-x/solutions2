#include<iostream>
using namespace std;

int main() {
  double n; cin >> n;
  if(n == int(n)) cout << "int " << int(n);
  else {
    cout << "float " << int(n) << " " << n - int(n);
  }

  cout << endl;
}
