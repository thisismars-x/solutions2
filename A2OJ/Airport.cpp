#include <iostream>
#include <queue>
using namespace std;

int main() {
  priority_queue<int> max, min;
  int n, m; cin >> n >> m;
  for(int i = 0; i < m; i++) {
    int temp; cin >> temp;
    max.push(temp);
    min.push(-temp);
  }

  int mmax = 0, mmin = 0;
  for(int i = 0; i < n; i++) {
    int temp;
    temp = max.top();
    max.pop();
    mmax += temp;
    if(temp - 1 > 0) max.push(temp - 1);
    temp = -min.top();
    min.pop();
    mmin += temp;
    if(temp - 1 > 0) min.push(-(temp - 1));
  }

  cout << mmax << " " << mmin << endl;
}
