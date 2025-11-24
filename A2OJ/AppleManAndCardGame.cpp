#include <algorithm>
#include <cctype>
#include <vector>
#include <iostream>
using namespace std;

int main() {
  long long n, k; cin >> n >> k;
  vector<long long> nn(26, 0);
  for(long long i = 0; i < n; i++) {
    char ch; cin >> ch;
    nn[char(tolower(ch)) - 'a'] += 1;
  }
  sort(nn.begin(), nn.end(), [](const long long& a, const long long& b) { return a > b; });
  long long sum = 0;
  for(long long i = 0; i < 26; i++) {
    if(nn[i] > k) {
      sum += k*k;
      k = 0;
    } else {
      sum += nn[i]*nn[i];
      k -= nn[i];
    }
    if(k == 0) break;
  }
  cout << sum << endl;
}
