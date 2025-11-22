#include <deque>
#include<iostream>
#include<set>
#include<algorithm>
#include<queue>
#include<vector>
#include<stack>
#include<unordered_set>
#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr)
#define Endl '\n'
#define ll long long
#define loop while(true)
#define rep(i, a, b) for(int i = a; i < b; i++)
#define MAIN int main() { fastIO; solve(); }

using namespace std;

void solve() {
  int n, k; cin >> n >> k;
  deque<int> x;

  set<int> o;
  for(int i = 0; i < n; i++) {
    int temp; cin >> temp;

    if(o.count(temp) == 0) {
      x.push_front(temp);
      o.insert(temp);
    }

    if(x.size() > k) {
      int back = x.back();
      o.erase(back);
      x.pop_back();
    }
  }

  cout << x.size() << Endl;
  for(auto e: x) cout << e << " ";
  cout << Endl;
}


MAIN
