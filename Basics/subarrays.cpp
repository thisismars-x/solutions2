#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> subarray(const vector<int>& vec) {

  vector<vector<int>> result;

  for(int i = 0; i < vec.size(); i++) {
    for(int j = i; j < vec.size(); j++) {
      vector<int> temp;
      for(int k = i; k <= j; k++) temp.push_back(vec[k]);
      result.push_back(temp);
    }
  }

  return result;

}

int main() {
  int n; cin >> n;
  vector<int> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];

  auto result = subarray(x);
  for(auto v: result) {
    for(auto i: v) cout << i << " ";
    cout << endl;
  }

  cout << result.size();
}
