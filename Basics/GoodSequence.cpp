#include<iostream>
#include <unordered_map>
using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  unordered_map<int,int> x;
  for(int i = 0; i < n; i++) {
    int temp; cin >> temp;
    x[temp]++;
  }

  int c = 0;
  for(auto &[a, b] : x) {
    if(b < a) c += b;
    else if(b > a) c+= b - a;
  }

  cout << c << '\n';
}
