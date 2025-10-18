#include<iostream>
using namespace std;

int main() {
  string s; cin >> s;

  string a, b;
  char op;

  bool next_n = false;
  for(auto i : s) {
    if(i == '+' or i == '-' or i == '*' or i == '/') {
      op = i;
      next_n = true;
    } else {
      if(next_n) b.push_back(i);
      else a.push_back(i);
    }
  }

  if(op == '+') {
    cout << int(atoi(a.c_str()) + atoi(b.c_str()));
  } else if(op == '-') {
    cout << int(atoi(a.c_str()) - atoi(b.c_str()));
  } else if(op == '*') {
    cout << int(atoi(a.c_str()) * atoi(b.c_str()));
  } else if(op == '/') {
    cout << int(atoi(a.c_str()) / atoi(b.c_str()));
  }

}
