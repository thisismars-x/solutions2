#include <ios>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007

ll table[100005], dp[100005];


void solve() {

  int n; cin >> n; 
  int m = n;
  while(m--) {
    ll temp; cin >> temp;
    table[temp]++;
  }
  dp[0] = 0, dp[1] = table[1];
  for(int i = 2; i < 100005; i++) {
    dp[i] = max(dp[i-1], dp[i-2] + (i*table[i]));
  }
  cout << dp[100005-1] << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


