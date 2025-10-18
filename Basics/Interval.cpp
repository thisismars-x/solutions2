#include<iostream>
using namespace std;

int main() {
  double n; cin >> n;
  
  if(n <= 25 and n >= 0) cout << "Interval [0,25]";
  else if(n > 25 and n <= 50) cout << "Interval (25,50]";
  else if(n > 50 and n <= 75) cout << "Interval (50,75]";
  else if(n > 75 and n <= 100) cout << "Interval (75,100]";
  else cout << "Out of Intervals";
  cout << endl;

}
