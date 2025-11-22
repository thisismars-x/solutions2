#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int nfif = 0, nhun = 0, ntf = 0;
  for(int i = 0; i < n; i++) {
    int temp; cin >> temp;
    if(temp == 25) ntf++;
    else if(temp == 50) { 
      bool ok = false;
      if(ntf >= 1) {
        ntf -= 1;
        ok = true;
      }

      if(!ok) {
        cout << "NO\n";
        return 0;
      }
      nfif++;
    }
    else {
      bool ok = false;
      if(nfif >= 1 and ntf >= 1) {
        nfif -= 1; ntf -= 1;
        ok = true;
      }
      if(!ok) {
        if(ntf >= 3) {
          ntf -= 3;
          ok = true;
        }
      }

      if(!ok) {
        cout << "NO\n";
        return 0;
      }

    }
  }

  cout << "YES\n";
}
