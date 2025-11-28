#include <cstring>
#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void solve() {

  int n, m; cin >> n >> m;  
  vector<ll> nums(n);
  for(int i = 0; i < n; i++) cin >> nums[i];
  ll sum = 0;
  for(int i = 0; i < m; i++) {
    // operations
    int which; cin >> which;
    if(which == 3) {
      int pos; cin >> pos;
      cout << nums[pos-1] + sum << endl;
    } else if(which == 2) {
      int y; cin >> y;
      sum += y;
    } else {
      ll v, x; cin >> v >> x;
      nums[v-1] = x-sum; //so when added again(which==1) it normalizes it to x-sum+sum = x
    }

  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

}

