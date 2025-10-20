#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr)
#define Endl '\n'
#define ll long long
#define loop while(true)
#define rep(i, a, b) for(int i = a; i < b; i++)
#define MAIN int main() { fastIO; solve(); }

using namespace std;

void solve() {

    int a, b; cin >> a >> b;
    deque<pair<int, int>> l;
    rep(i, 0, a) {
        int temp; cin >> temp;
        l.push_back({temp, i + 1});
    }

    int index = 0;
    loop {
        if(l.empty()) break;
        if(l.front().first <= b) { 
            index = l.front().second;
            l.pop_front();
        }
        else {
            l.push_back({ l.front().first - b, l.front().second });
            l.pop_front();
        }
    }

    cout << index << Endl;

}

MAIN