#include <iostream>
using namespace std;

/*
*
* Problem statement:
*
* |x| | | | | | |
* | | | | | | | |
* | | | | | | | |
* | | | | | | | |
* | | | | | | | |
* | | | | | | | |
* | | | | | | |y|
*
* start at x, end at y, visit all cells
* exactly once
*
*/

bool table[7][7]{false};
int total = 0;

bool ok(int row, int col) {
  return (row >= 0 and row < 7 and col >= 0 and col < 7 and not table[row][col]);
}

// do not split the space into 2 disjoint sets
// then you will have to visit each cell more than once
bool dead_end(int row, int col) {

  if(!ok(row+1, col) and !ok(row-1, col) and ok(row, col-1) and ok(row, col+1)) return true;
  if(!ok(row, col+1) and !ok(row, col-1) and ok(row+1, col) and ok(row-1, col)) return true;
  return false;

}

int row_move[] = {-1, 1, 0, 0};
int col_move[] = {0, 0, -1, 1};

void solve(int row, int col, int visited) {
  if(row == 6 and col == 6) {
    if(visited == 49) total++;
    return;
  }

  if(dead_end(row, col)) return;

  for(int i = 0; i < 4; i++) {
    int nr = row + row_move[i],
    nc = col + col_move[i];
    if(ok(nr, nc)) {
      table[nr][nc] = true;
      solve(nr, nc, visited + 1);
      table[nr][nc] = false;
    }
  }
}

int main() {
  table[0][0] = true;
  solve(0, 0, 1);
  cout << total << '\n';
}
