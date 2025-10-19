#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main() { int n; cin >> n; vector<int> x(n); for(int i = 0; i < n; i++) cin >> x[i]; sort(x.begin(), x.end()); for(auto i: x) cout << i << " ";}
