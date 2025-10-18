#include<iostream>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    
    string s, y; cin >> s >> y;
    auto it1 = s.begin();
    auto it2 = y.begin();
    while(it1 != s.end() or it2 != y.end()) {
      if(it1 != s.end()) { 
        cout << *it1++;
      }

      if(it2 != y.end()) {
        cout << *it2++;
      }
    }

    cout << endl;

  }
}
