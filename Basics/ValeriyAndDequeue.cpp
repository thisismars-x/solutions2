#include<iostream>
#include<algorithm>
#include<queue>
#include <set>
#include<vector>
#include<stack>
#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr)
#define Endl '\n'
#define ll long long
#define loop while(true)
#define rep(i, a, b) for(int i = a; i < b; i++)
#define MAIN int main() { fastIO; solve(); }

using namespace std;

void solve() {

  int n, q; cin >> n >> q;
  deque<int> x(n);
  rep(i, 0, n) cin >> x[i];

  int curr_loop = 1;
  set<int> query;
  rep(i, 0, q) {
    int temp; cin >> temp;
    query.insert(temp);
  }

  loop {

    if(query.size() == 0) break;
    
    int first = x[0], second = x[1];
    if(second > first) {
      x.pop_front();
      x.push_back(first);
    } else {
      x.erase(x.begin() + 1);
      x.push_back(second);
    }

    if(query.count(curr_loop) != 0) {
      cout << first << " " << second << Endl;
      query.erase(curr_loop);
    }

    curr_loop += 1;

  }

  cout << Endl;


}

MAIN
