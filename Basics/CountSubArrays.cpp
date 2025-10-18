#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool is_non_decreasing(vector<int>& n) {
    if(n.size() == 1) return true;
    int last = n[0];
    for(int i = 1; i < n.size(); i++) {
        if(n[i] < n[i-1]) return false;
    }

    return true;
}

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

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        vector<vector<int>> result = subarray(v);

        int total = count_if(result.begin(), result.end(), is_non_decreasing);

        cout << total << endl;
    }
}
