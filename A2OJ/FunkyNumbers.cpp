#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endL '\n'
#define mod 1000000007
#define all(v) (v).begin(), (v).end()

ll funky_numbers[50001];

void solve() {

  ll num; cin >> num;  
  for(ll i = 1; i <= 50000; i++) {
    funky_numbers[i] = i * (i + 1) / 2;
  }

  int l = 1, r = 50000;
  while(l <= r) {
    ll sum = funky_numbers[l] + funky_numbers[r];
    if(sum == num) {
      cout << "YES\n";
      return;
    }

    if(sum > num) r--;
    else l++;
  }

  cout << "NO\n";

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

