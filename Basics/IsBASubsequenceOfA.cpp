#include<iostream>
#include<vector>
using namespace std;

bool is_subs(vector<int>& a, vector<int>& b) {
  int i = 0, j = 0;
  for(;i < a.size() and j < b.size();) {
    if(a[i] == b[j]) j += 1;
    i += 1;
  }

  return j == b.size();
}

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < m; i++) cin >> b[i];

  if(is_subs(a, b)) cout << "YES";
  else cout << "NO";
}
