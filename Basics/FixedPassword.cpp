#include<iostream>
using namespace std;

int main() {

  while(true) {
    int pw; cin >> pw;
    if(pw == 1999) {
      cout << "Correct\n";
      return 0;
    } else cout << "Wrong\n";
  }

}
