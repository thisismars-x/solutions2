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
    int n; cin >> n;
    deque<int> x;
    int temp; cin >> temp; x.push_back(temp);

    for(int i = 1; i < n; i++) {
      int temp; cin >> temp;
      if(temp > x.front()) {
        x.push_back(temp);
      } else x.push_front(temp);
    }

    while(n--) {
      cout << x.front() << " ";
      x.pop_front(); 
    }

    cout << Endl;
  }

}

MAIN
