#include <iostream>
using namespace std;

int main() {
  long long int sum = 0;
  int n; cin >> n;
  for(int i = 0; i < n; i++) {
    long long int temp; cin >> temp;
    sum += temp;
  }

  if(sum%n == 0) cout << n << endl;
  else cout << n - 1 << endl;
}
