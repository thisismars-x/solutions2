#include <iostream>
#include <vector>
using namespace std;

#define num_nodes = 8
vector<int> adj[8 + 1];
vector<bool> visited(8+1);

int which_node;
void dfs() {
  if(visited[which_node]) return;
  visited[which_node] = true;

  cout << '\n';
  for(auto& nodes: adj[which_node]) {
    cout << char('a' + nodes - 1) << " ";
    which_node = nodes;
    dfs();
  }

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
  which_node = 1;
  dfs();


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
