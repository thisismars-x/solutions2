#include <vector>
#include <queue>
#include <iostream>
using namespace std;

#define num_nodes  8
vector<int> adj[8 + 1];
vector<bool> visited(8+1);

queue<int> q;

void bfs(int node) {
  if(visited[node]) return;
  visited[node]=true;
  q.push(node);

  while(!q.empty()) {
    int front = q.front(); q.pop();
    cout << char('a' + front - 1) << '\t';
    for(auto u: adj[front]) {
      if(visited[u]) continue;
      visited[u] = true;
      q.push(u);
    }
  }
  cout << '\n';
}

int main() {

  adj[1].push_back(2);
  adj[1].push_back(3);
  adj[2].push_back(4);
  adj[4].push_back(7);
  adj[3].push_back(5);
  adj[5].push_back(8);
  adj[3].push_back(6);

  for(int i = 0; i < 9; i++) visited[i] = false;
  bfs(1);

}

/*
STRUCTURE OF THE GRAPH

               a
              / \
             b   c
             |   |\
             d   e f
            /    |
           g     h
*/
