#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<stack>
#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr)
#define Endl '\n'
#define ll long long
#define loop while(true)
#define till(t) while(t--)
#define rep(i, a, b) for(int i = a; i < b; i++)
#define MAIN int main() { fastIO; solve(); }

using namespace std;

void solve() {

  int t; cin >> t;
  till(t) {

    int n; cin >> n;
    bool rev = false;

    deque<int> x;
    ll sum = 0;
    rep(i, 0, n) {

      int s; cin >> s;
      if(s == 3) {
        int temp; cin >> temp;
        if(!rev) x.push_back(temp);
        else x.push_front(temp);

        if(!rev) sum += (i + 1) * temp;
      }

      else if(s == 2) {
        rev = !rev;
        sum = 0;
        rep(i, 0, x.size()) {
          sum += x[x.size() - 1 - i] * (i + 1);
        }
      }

      else {
        if(!rev) {
          sum -= (i + 1) * x.back();
          x.push_front(x.back());
          x.pop_back();
        } else {
          x.push_back(x.front());
          x.pop_front();
        }
      }

      cout << sum << Endl;

    }

    cout << Endl;

  }

}

MAIN
