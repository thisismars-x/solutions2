#include <iostream>
using namespace std;

#define N 150010

int main() {
  int arr[N], n, k; cin >> n >> k;
  for(int i = 0; i < n; i++) cin >> arr[i];
  int sum = 0;
  for(int i = 0; i <= k; i++) sum += arr[i];
  int pos = 0, min = sum;
  for(int i = 1; i + (k - 1) < n; i++) {
    sum = sum - arr[i-1];
    sum = sum + arr[i-1+k];
    if(min > sum) {
      min = sum;
      pos = i;
    }
  }

  cout << pos + 1 << endl;
}
