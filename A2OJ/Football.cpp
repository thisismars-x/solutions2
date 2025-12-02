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

  int n; cin >> n; n--;
  string team1, team2; cin >> team1;
  int t1 = 1, t2 = 0;
  while(n--) {
    string temp; cin >> temp;
    if(temp == team1) t1++;
    else {
      team2 = temp;
      t2++;
    }
  }

  cout << (t1 > t2? team1: team2) << endL;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

