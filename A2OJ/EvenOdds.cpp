#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long int n, m; cin >> n >> m;
  long long number_of_odds = (n + 1) / 2;
  if(m <= number_of_odds) cout << 2*m - 1 << endl;
  else cout << 2*(m - number_of_odds) << endl;
}
