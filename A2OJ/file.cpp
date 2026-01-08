#include <ios>
#include <iostream>
#include <map>
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
    map<int, vector<int>> mp;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
      int temp; cin >> temp;
      mp[temp].push_back(i + 1);
    }

    auto p = mp.begin();
    if(p->second.size() == n) {
      cout << "NO\n";
      continue;
    }
    
    cout << "YES\n";
    auto pp = p->second;
    p++;
    int next = p->second[0];
    while(p != mp.end()) {
      for(auto& e: p->second) cout << pp[0] << " " << e << endl;
      p++;
    }

    for(int i = 1; i < pp.size(); i++) cout << next << " " << pp[i] << endl;
  }


}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

