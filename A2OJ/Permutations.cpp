#include <ios>
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007
#define all(v) (v).begin(), (v).end()

void solve() {

  int n; cin >> n;
  set<int> nn;
  for(int i = 0; i < n; i++) {
    int temp; cin >> temp;
    if(temp > 0 and temp < n + 1) nn.insert(temp);
  }
  cout << n - nn.size() << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


