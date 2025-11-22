#include <algorithm>
#include <iostream>
#include <pstl/glue_algorithm_defs.h>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  
  string ss;
  for(int i = 0; i < s.size(); ) {
    char curr = s[i];
    bool found_wub = false;
    if(curr == 'W') {
      if(s[i + 1] == 'U') {
        if(s[i + 2] == 'B') {
          if(i != 0)
            ss += " ";
          i += 3;
          found_wub = true;
        }
      }
    }
    if(not found_wub) {
      ss += curr;
      i++;
    }
  }
  cout << ss << endl;
}
