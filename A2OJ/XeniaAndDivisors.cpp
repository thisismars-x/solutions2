#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> m(7, 0);
  for(int i = 0; i < n; i++) {
    int temp; cin >> temp;
    if(temp == 5 or temp == 7) {
      cout << "-1\n";
      return 0;
    }
    m[temp - 1]++;
  }

  if(
    m[0] != m[1] + m[2] or
    m[2] > m[5] or
    m[3] > m[1] or
    m[1] + m[2] != m[3] + m[5]
  ) {
    cout << "-1\n";
    return 0;
  }

  for(int i = 0; i < m[3]; i++) cout << "1 2 4\n";
  for(int i = 0; i < m[2]; i++) cout << "1 3 6\n";
  for(int i = 0; i < m[5] - m[2]; i++) cout << "1 2 6\n";
}
