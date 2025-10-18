#include<iostream>
using namespace std;

int with_steps(int start, int end) {
  if(start >= end) return start == end;
  return with_steps(start + 1, end) + with_steps(start+2, end) + with_steps(start+3, end);
  
}

int main() {
  int a, b; cin >> a >> b;
  cout << with_steps(a, b);

}
