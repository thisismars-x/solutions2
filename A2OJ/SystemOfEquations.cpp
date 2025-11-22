#include <iostream>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int count = 0;
  for(int a = 0; a <= 100; a++) {
    for(int b = 0; b <= 100; b++) {
      if(a*a + b == n and a + b*b == m) {
        count++; 
      }
    }
  }

  cout << count << endl;
}
