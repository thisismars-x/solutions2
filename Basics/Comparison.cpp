#include<iostream>
using namespace std;

int main() {
  char comp;
  int a, b; cin >> a >> comp >> b;
  if(comp == '>') cout << (a > b? "Right": "Wrong");
  if(comp == '<') cout << (a < b? "Right": "Wrong");
  if(comp == '=') cout << (a == b? "Right": "Wrong");
}
