#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; 
    cin >> n;

    vector<int> elem(2*n);
    unordered_map<int, vector<int>> pos;

    for (int i = 0; i < 2*n; i++) {
        cin >> elem[i];
        pos[elem[i]].push_back(i+1);
    }

    for (auto &p : pos) {
        if (p.second.size() % 2 != 0) {
            cout << -1 << endl;
            return 0;
        }
    }

    for (auto &p : pos) {
        auto &v = p.second;
        for (int i = 0; i < v.size(); i += 2) {
            cout << v[i] << " " << v[i+1] << "\n";
        }
    }

    return 0;
}
