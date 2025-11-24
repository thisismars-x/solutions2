#include <iostream>
using namespace std;

int main() {
  int total = 0;
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      int temp; cin >> temp;
      if(temp == 1) {
        if(j > 2) total += j - 2;
        else total += 2 - j;
        if(i > 2) total += i - 2;
        else total += 2 - i;
        cout << total << endl;
        return 0;
      }
    }
  }
}
