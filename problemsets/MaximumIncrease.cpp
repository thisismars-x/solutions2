#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {

  int n; cin >> n;
  int temp; cin >> temp;
  n -= 1;
  int curr_len = 1;
  int max_len = 1;
  while(n--) {
    int x; cin >> x;
    if(x > temp) {
      curr_len += 1;
    }
    else curr_len = 1;
    temp = x;
    max_len = max(max_len, curr_len);
  }
  cout << max_len << endl;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

