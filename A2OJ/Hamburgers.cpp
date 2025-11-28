#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void solve() {

  string s; cin >> s;
  long long nsn = 0, nbn = 0, ncn = 0;
  for(auto& ch: s) {
    if(ch == 'B') nbn++;
    else if(ch == 'S') nsn++;
    else if(ch == 'C') ncn++;
  }
  long long nb, ns, nc; cin >> nb >> ns >> nc;
  long long pb, ps, pc; cin >> pb >> ps >> pc;
  long long roubles; cin >> roubles;

  long long left = 0, right = 1e+15, total=0;
  while(left <= right) {
    ll mid = (left + (right - left)/2);

    ll nbr = (mid * nbn) - nb;
    if(nbr < 0) nbr = 0;
    ll nsr = (mid * nsn) - ns;
    if(nsr < 0) nsr = 0;
    ll ncr = (mid * ncn) - nc;
    if(ncr < 0) ncr = 0;
    bool do_you_have_the_money = false;
    if(nbr*pb + ncr*pc + nsr*ps <= roubles) do_you_have_the_money = true;
    
    if(do_you_have_the_money) {
      left = mid + 1;
      total = mid;
    }
    else right = mid - 1;
  }
  cout << total << endl;

}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

}

