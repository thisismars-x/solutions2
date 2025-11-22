#include <iostream>
using namespace std;

int main() {
  
  int t; cin >> t;
  int n = t;
  int closed_left = 0, closed_right = 0;
  while(t--) {
    int a, b;
    cin >> a >> b;
    closed_left += a; 
    closed_right += b;
  }

  int total_time = 0;
  if(closed_left > (n - closed_left)) total_time += n - closed_left;
  else total_time += closed_left;

  if(closed_right > (n - closed_right)) total_time += n - closed_right;
  else total_time += closed_right;

  cout << total_time << endl;
}
