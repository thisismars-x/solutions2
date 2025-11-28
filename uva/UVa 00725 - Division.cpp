#include <cassert>
#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void solve() {

  //5 digit numbers such that abcde/fghij = n
  int N; cin >> N;
  for(int i = 1234; i <= 98765/N; i++) {
    int other = i * N;
    int used = 0;
    int temp = i;
    while(temp) {
      used |= 1 << (temp % 10);
      temp /= 10;
    }
    temp = other;
    while(temp) {
      used |= 1 << (temp% 10);
      temp /= 10;
    }
    if(used) {
      assert(other/i == N);
      cout << other << " " << i << endl;
    }
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

