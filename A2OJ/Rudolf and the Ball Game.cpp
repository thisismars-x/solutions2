#include <ios>
#include <set>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define ll long long
#define endl '\n'
#define mod 1000000007
#define all(v) (v).begin(), (v).end()
#define clr(v) memset((v), 0, sizeof(v))
#define fin(filename) freopen((filename), "r", stdin)
#define fout(filename) freopen((filename), "w", stdout)

void solve() {

  int t; cin >> t;
  while(t--) {
    int n, m, x; cin >> n >> m >> x;
    x--;
    set<int> ptr{x};
    while(m--) {
      int r; char c; cin >> r >> c;
      set<int> temp;
      if(c != '0') { // counter clock, or ?
        for(auto& e: ptr) {
          temp.emplace((e + n - r) % n);
        } 
      }
      if(c != '1') {
        for(auto& e: ptr) {
          temp.emplace((e + r) % n);
        }
      }
      ptr = temp;
    }
    cout << ptr.size() << endl;
    for(auto e: ptr) cout << ++e << " ";
    cout << endl;
  }
 

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}


