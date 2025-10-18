#include<iostream>
using namespace std;

int main() {
  int k; cin >> k;
  int s; cin >> s;

  int n = 0;
  for(int i = 0 ; i <= k ; i++ ) {
    for(int j = 0 ; j <= k ; j++ ) {
      for(int l = 0; l <= k; l++ ) {
        if(i + j + l == s) n += 1;
      }
    }
  }

  cout << n;
}
