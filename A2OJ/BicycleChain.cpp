#include <iostream>
#include <vector>
using namespace std;

int main() {
  int p, r;
  cin >> p;
  vector<float> pedal(p);
  for(int i = 0; i < p; i++) cin >> pedal[i];
  cin >> r;
  vector<float> rear(r);
  for(int i = 0; i < r; i++) cin >> rear[i];
  int max_ratio = 0;
  int count = 0;
  for(int i = rear.size() - 1; i >= 0; i--) {
    float rear_num = rear[i];
    for(int j = 0; j < pedal.size(); j++) {
      float pedal_num = pedal[j];
      if(rear_num / pedal_num == int(rear_num / pedal_num)) {
        if(int(rear_num / pedal_num) > max_ratio) {
          count = 1;
          max_ratio = int(rear_num / pedal_num);
        }
        else if(int(rear_num / pedal_num) == max_ratio) {
          count++;
        }
      }
    }
  }

  cout << count << endl;
}
