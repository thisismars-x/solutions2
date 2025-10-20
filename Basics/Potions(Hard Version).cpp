#include<iostream>
#include<algorithm>
#include<queue>
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

    int n; cin >> n;
    vector<ll> s(n);
    rep(i, 0, n) cin >> s[i];

    priority_queue<ll, vector<ll>, greater<ll>> x;
    ll health = 0;
    rep(i, 0, n) {
        health += s[i]; 
        x.push(s[i]);
        if(health < 0) {
            health -= x.top();
            x.pop();
        }
    }

    cout << x.size() << Endl;
}

MAIN
