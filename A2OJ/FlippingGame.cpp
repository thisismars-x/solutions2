#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> nn(n);
  int ones = 0;
  for(int i = 0; i < n; i++) {
    cin >> nn[i];
    if(nn[i]) ones += 1;
  }

  int sum = 0, ans = 0;
  for(int i = 0; i < n; i++) {
    if(nn[i]) sum -= 1;
    else sum += 1;
    ans = max(ans, sum);
    if(sum < 0) sum = 0;
  }

  if(ones==n) cout << n-1 << endl;
  else cout << ones + ans << endl;


}
