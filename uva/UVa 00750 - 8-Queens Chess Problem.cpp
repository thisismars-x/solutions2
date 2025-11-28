#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
vector<vector<bool>> table(8, vector<bool>(8, false));

bool is_placeable(int row, int col) {
  for(int i = 0; i < row; i++) {
    if(table[i][col]) return false; // same column
  }
  for(int i = 0; i < col; i++) {
    if(table[row][i]) return false; // same row
  }
  for(int i = row-1, j = col-1; i >= 0 and j >= 0; i--, j--) {
    if(table[i][j]) return false;  // left diagonal
  }
  for(int i = row-1, j = col+1; i >= 0 and j < 8; i--, j++) {
    if(table[i][j]) return false;  // right diagonal
  }
  return true;
}

int nsols = 0;
void solve(int r) {

  if(r == 8) {
    nsols++;
    return;
  }
  for(int i = 0; i < 8; i++) {
    if(is_placeable(r, i)) {
      table[r][i] = true;
      solve(r+1);
      table[r][i] = false;
    }
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve(0);
  cout << nsols << endl;
}

