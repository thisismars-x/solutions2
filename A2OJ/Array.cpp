#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

void solve() {

  int n; cin >> n;
  vector<int> pos;
  vector<int> neg;
  int first = 0;
  for(int i = 0; i < n; i++) {
    int temp; cin >> temp;
    if(temp == 0) continue;
    if(temp < 0) {
      if(first == 0) first = temp;
      else neg.push_back(temp);
    } else pos.push_back(temp);
  }

  cout << 1 << " " << first << endL;
  cout << pos.size() + (neg.size() / 2 * 2) << " ";
  for(auto& elem: pos) cout << elem << " ";
  for(int i = 0; i < neg.size() / 2 * 2; i++) cout << neg[i] << " ";
  cout << endL;
  if(neg.size() / 2 * 2 == neg.size()) {
    cout << 1 << " " << 0 << endL;
  } else {
    cout << 1 + (neg.size() - (neg.size()/2 *2)) << " ";
    cout << 0 << " " << neg[neg.size()/2 * 2];
    cout << endL;
  }


}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


