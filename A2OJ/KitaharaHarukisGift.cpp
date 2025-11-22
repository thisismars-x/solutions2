#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  int _200 = 0, _100 = 0;
  for(int i = 0; i < n; i++) {
    int temp; cin >> temp;
    if(temp == 200) _200++;
    else _100++;
  }
  
  int middle = ( (_200 * 200) + (_100 * 100) ) / 2;
  for(int i = 0; i <= _100; i++) {
    for(int j = 0; j <= _200; j++) {
      if(
        i*100 + j*200 == middle and
        (_100 - i)*100 + (_200 - j)*200 == middle
      ) {
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";

}
