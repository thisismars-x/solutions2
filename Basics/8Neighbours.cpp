#include<iostream>
#include <vector>
using namespace std;

int main() {

  int r, c; cin >> r >> c;

  vector<string> board(r);
  for(int i = 0; i < r; i++) cin >> board[i];

  int x, y; cin >> x >> y;
  x -= 1;
  y -= 1;

  bool yes = true;

  int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

  for(int k = 0; k < 8; k++) {
      int nx = x + dx[k];
      int ny = y + dy[k];

      if(nx >= 0 && nx < r && ny >= 0 && ny < c) {
          if(board[nx][ny] != 'x') {
              yes = false;
              break;
          }
      }
  }

  cout << (yes? "yes": "no");


}
