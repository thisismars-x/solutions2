#include<iostream>
using namespace std;

int main() {
  int a, b; float t; cin >> a >> b >> t;
  t += 0.5;

  cout << ( int(t / a) * b ) << endl;
}
