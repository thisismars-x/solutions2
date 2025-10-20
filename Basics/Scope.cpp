#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr)
#define Endl '\n'
#define ll long long
#define loop while(true)
#define rep(i, a, b) for(int i = a; i < b; i++)
#define MAIN int main() { fastIO; solve(); }

using namespace std;

void solve() {

    string s; cin >> s;

    int curr_level = 0;
    vector<vector<char>> level(s.size());
    vector<bool> active(200);

    for(auto x: s) {
        if(x == '(') {
            curr_level += 1;
        } else if(x == ')') {
            for(auto c : level[curr_level]) {
                active[c] = false;
            }
            level[curr_level].clear();
            curr_level -= 1;
        } else {
            if(active[x]) {
                cout << "No" << Endl;
                return;
            }

            level[curr_level].push_back(x);
            active[x] = true;
        }
    }

    cout << "Yes" << Endl;

}

MAIN