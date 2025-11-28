#include <algorithm>
#include <iostream>
using namespace std;

int coins[]{1, 3, 4};
int total = 100;
int table[100]{-1};

int solve(int sum) {
  
  if(sum == 0) return 0;
  if(table[sum] > 0) return table[sum];
  int best = 99999999;
  for(auto coin: coins) {
    best = min(best, solve(sum-coin)+1);
  }
  table[sum] = best;
  return table[sum];

}

int main() {
  cout << solve(50) << '\n';
}
