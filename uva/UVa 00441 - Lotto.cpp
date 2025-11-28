#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void solve() {

  int k; cin >> k; // 6 < k < 13
  int arr[k];
  for(int i = 0; i < k; i++) cin >> arr[i];
  for(int j = 0; j < k-5; j++)
    for(int kk = j+1; kk < k-4; kk++)
      for(int l = kk+1; l < k-3; l++)
        for(int m = l+1; m < k-2; m++)
          for(int n = m+1; n < k-1; n++)
            for(int o = n+1; o < k; o++)
              cout << arr[j] << " " << arr[kk] << " " << arr[l] << " "
                << arr[m] << " " << arr[n] << " " << arr[o] << endl;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}
