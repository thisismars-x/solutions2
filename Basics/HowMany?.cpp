#include<iostream>
using namespace std;

int main() {
  int s, t; cin >> s >> t;

  int n = 0;
  for(int i = 0; i <= 100; i++) {
    for(int j = 0; j <= 100; j++) {
      for(int k = 0; k <= 100; k++) {
        if(i*j*k <= t and i+j+k <= s) n += 1;
      }
    }
  }

  cout << n;

}
