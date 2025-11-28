#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void solve() {

  int size; cin >> size;
  vector<int> n(size);
  for(int i = 0; i < size; i++) cin >> n[i];
  bool flag = false;
  ll sum = 0;
  for(int i = 0; i < size; i++) {
    if(n[i] == i) sum++;
    else if(n[n[i]] == i) flag = true;
  }
  cout << (sum == size? sum: sum += (flag? 2: 1)) << endl;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

}

