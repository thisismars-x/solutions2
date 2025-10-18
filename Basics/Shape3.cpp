#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;

  for(int i = 0; i < n; i++) {
    int spaces = n - i - 1;
    int aster = 2*i + 1;

    int _;
    for(_ = 0; _ < spaces; _++) cout << " ";
    for(_ = 0; _ < aster; _++) cout << "*";
    cout << endl;
  }

  for(int i = n-1; i >= 0; i--) {
    int spaces = n - i - 1;
    int aster = 2*i + 1;

    int _;
    for(_ = 0; _ < spaces; _++) cout << " ";
    for(_ = 0; _ < aster; _++) cout << "*";
    cout << endl;
  }


}
