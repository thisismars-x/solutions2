#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    int sum = 0;
    for(int i = 0 ; i  < n ; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int total_ways = 0;
    for(int i = 1; i <= 5; i++) {
        if(sum % (n + 1) != 0) {
            total_ways += 1;
        }
        sum += 1;
    }

    cout << total_ways << endl;
}
