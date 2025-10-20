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

  int n; cin >> n;
  priority_queue<int> x;
  while(n--) {
    int temp; cin >> temp;
    x.push(temp);
    if(x.size() == 1 or x.size() == 2) cout << "-1" << Endl;
    else {
      int l1 = x.top();
      x.pop();
      int l2 = x.top();
      x.pop();
      int l3 = x.top();
      x.pop();
      cout << l1 * l2 * l3 << Endl;
      x.push(l1);
      x.push(l2);
      x.push(l3);
    }
  }

}

MAIN
