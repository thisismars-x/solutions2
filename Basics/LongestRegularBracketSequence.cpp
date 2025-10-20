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

    stack<int> s;
    string ss; cin >> ss;

    vector<int> substring_len(ss.size(), 0);
    rep(i, 0, ss.size()) {
        if(ss[i] == ')') {
            if(!s.empty()) {
               int open_index = s.top();
               s.pop();

               substring_len[i] = (open_index > 0? substring_len[open_index-1] : 0) + (i - open_index + 1);
            }
        } else {
            s.push(i);
        }
    }

    int max = *max_element(substring_len.begin(), substring_len.end());
    if(max == 0) {
        cout << "0 1" << Endl;
        return;
    }
    int counts = count(substring_len.begin(), substring_len.end(), max);
    cout << max << " " << counts << Endl;

}

MAIN