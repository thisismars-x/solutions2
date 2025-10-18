#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  for(int i = 1; i <= n; i++) {
    int number_spaces = n - i;
    int number_aster = 2*i - 1;

    for(int _ = 0; _ < number_spaces; _++) {
      cout << " ";
    }

    for(int _ = 0; _ < number_aster; _++) {
      cout << "*";
    }

    cout << endl;
  }
}
