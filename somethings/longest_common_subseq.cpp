#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lcs(string s1, string s2, int a, int b, vector<vector<int>>& tbl) {
  if(a == 0 || b == 0) return 0;

  if(tbl[a][b] != -1) return tbl[a][b];

  if(s1[a - 1] == s2[b - 1]) {
    tbl[a][b] = 1 + lcs(s1, s2, a - 1, b - 1, tbl);
    return tbl[a][b];
  }

  tbl[a][b] = max(lcs(s1, s2, a-1, b, tbl), lcs(s1, s2, a, b-1, tbl));
  return tbl[a][b];

}

int main() {
  string s1 = "AGGTAB", s2 = "GXTXAYB";
  vector<vector<int>> tbl(s1.size() + 1, vector<int>(s2.size() + 1, -1));
  cout << lcs(s1, s2, s1.size(), s2.size(), tbl) << endl;
}
