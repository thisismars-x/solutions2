#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void solve() {

  long long n; cin >> n;
  long long total = 0;
  total += (n / 100);
  n -= (n/100) * 100;
  total += (n / 20);
  n -= (n/20)*20;
  total += (n/10);
  n -= (n/10)*10;
  total += (n / 5);
  n -= (n/5)*5;
  total += n;
  cout << total << endl;
  

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

