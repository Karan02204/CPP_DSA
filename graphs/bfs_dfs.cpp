#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void addEdge(vector<vector<int>>& graph,int u,int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void BFS(int start , vector<vector<int>>& graph){
    vector<bool> visited(graph.size(),false);
    queue<int> q;

    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        int curr = q.front();
        q.pop();

        cout << curr << " ";
        for(auto neighbour : graph[curr]){
            if(!visited[neighbour]){
                visited[neighbour]=true;
                q.push(neighbour);
            }
        }
    }
    cout << endl;
}

void dfsutil(int start,vector<vector<int>>& graph,vector<bool>& visited){
    visited[start] = true;
    cout << start << " ";

    for(auto neighbour : graph[start]){
        if(!visited[neighbour]){
            dfsutil(neighbour,graph,visited);
        }
    }
}

void DFS(int start,vector<vector<int>>& graph){
    vector<bool> visited(graph.size(),false);
    dfsutil(start,graph,visited);
    cout << endl;
}

int main()
{
    int n =5;
    vector<vector<int>> graph(n);

    addEdge(graph,0,1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);

    int startNode = 0;
    BFS(startNode,graph);
    DFS(startNode,graph);


}