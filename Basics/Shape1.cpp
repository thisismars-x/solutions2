#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  while(n--) {
    for(int i = 0; i < n + 1; i++) cout << "*";
    cout << endl;
  }
}
