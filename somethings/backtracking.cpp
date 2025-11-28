#include <iostream>
using namespace std;

int table[7][7]{0};
int total = 0;

inline bool ok(int row, int col) {
  return (
    row >= 0 and row < 7 and
    col >= 0 and col < 7 and
    not table[row][col]
  );
}

inline bool dead_end(int row, int col) {

  if(
    !ok(row+1, col) and !ok(row-1, col) and // blocked from up/down
    ok(row, col+1) and ok(row, col-1) // but can go left/right
  ) return true;

  if(
    !ok(row, col+1) and !ok(row, col-1) and // blocked from left/right
    ok(row+1, col) and ok(row-1, col)
  ) return true;

  return false;
}

int m_row[]{-1, 0, 0, 1};
int m_col[]{0, -1, 1, 0};

void solve(int row, int col, int visited) {
  if(row == 6 and col == 6) {
    if(visited == 7*7) total++;
    return;
  }

  if(dead_end(row, col)) return;

  for(int i = 0; i < 4; i++) {
    int rowx = row + m_row[i];
    int colx = col + m_col[i];
    if(ok(rowx, colx)) {
      table[rowx][colx] = 1;
      solve(rowx, colx, visited+1);
      table[rowx][colx] = 0;
    }
  }
}

int main() {
  table[0][0] = 1;
  solve(0, 0, 1);
  cout << total << '\n';
}
