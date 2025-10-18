#include<iostream>
using namespace std;

int main() {

  char ch; cin >> ch;
  if(ch >= '0' and ch <= '9') cout << "IS DIGIT\n";
  else if(ch >= 'a' and ch <= 'z') cout << "ALPHA\n" << "IS SMALL\n"; 
  else if(ch >= 'A' and ch <= 'Z') cout << "ALPHA\n" << "IS CAPITAL\n";

}
