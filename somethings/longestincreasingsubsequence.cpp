#include <algorithm>
#include <iostream>
using namespace std;

int table[]{6, 2, 5, 1, 7, 4, 8, 3, 9};
int n = 9;

int dp[9]{-1};

void solve() {
  
  for(int i = 0; i < n; i++) {
    dp[i] = 1;
    for(int j = 0; j < i; j++) {
      if(table[j] < table[i]) {
        dp[i] = max(dp[i], dp[j]+1);
      }
    }
  }
  cout << *max_element(dp, dp+9) << '\n';
  

}

int main() {
  solve();
}
