#include<iostream>
using namespace std;

int main() {
  char ch; cin >> ch;
  if(ch >= 'a' and ch <= 'z') cout << char(ch - ('a' - 'A'));
  else if(ch >= 'A' and ch <= 'Z') cout << char(ch + ('a' - 'A'));
}
