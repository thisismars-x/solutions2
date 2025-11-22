#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int happiness[5][5];
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      cin >> happiness[i][j];
    }
  }

  vector<int> order{0, 1, 2, 3, 4};
  int max_happiness = 0;
  do {
    int curr_happiness = 
      happiness[order[0]][order[1]] + happiness[order[1]][order[0]] + happiness[order[2]][order[3]] + happiness[order[3]][order[2]] + 
      happiness[order[1]][order[2]] + happiness[order[2]][order[1]] + happiness[order[3]][order[4]] + happiness[order[4]][order[3]] +
      happiness[order[2]][order[3]] + happiness[order[3]][order[2]] + 
      happiness[order[3]][order[4]] + happiness[order[4]][order[3]];
    max_happiness = max(max_happiness, curr_happiness);
  } while(next_permutation(order.begin(), order.end()));

  cout << max_happiness << endl;

}
