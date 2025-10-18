#include<iostream>
#include<cmath>
using namespace std;

int main() {
  long long int n; cin >> n;

  int n_years = floor(n / 365);
  cout << n_years << " years\n";

  int n_months = floor((n - n_years * 365) / 30);
  cout << n_months << " months\n";

  int n_days = floor(( n - n_years*365 - n_months*30));
  cout << n_days << " days\n";

}

