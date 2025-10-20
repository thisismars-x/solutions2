#include<iostream>
#include<algorithm>
#include<queue>
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

  int t; cin >> t;
  while(t--) {
    priority_queue<int> p;
    int n; cin >> n;
    ll temp, sum=0;
    rep(i, 0, n) {
      cin >> temp;
      if(temp == 0 and !p.empty()) {
        sum += p.top();
        p.pop();
      } else p.push(temp);
    }
    cout << sum << Endl;
  }

}

MAIN
