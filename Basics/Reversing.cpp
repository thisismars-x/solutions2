#include<iostream>
#include<algorithm>
#include<vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> x(n, 0);
  for(int i = 0; i < n; i++) std::cin >> x[i];
  std::reverse(x.begin(), x.end());

  for(int a : x) std::cout << a << " ";
}
