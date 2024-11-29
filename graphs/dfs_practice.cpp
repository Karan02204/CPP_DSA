#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
using namespace std;
void dfs(int source , unordered_map<int,bool> &isvisited,unordered_map<int,list<int>> &adj,vector<int> &component){
    component.push_back(source);
    isvisited[source] = true;
    for(auto neighbour : adj[source]){
        if(!isvisited[neighbour]){
            dfs(neighbour,isvisited,adj,component);
        }
    }
}
vector<vector<int>> dfsTraversal(int V,int E,vector<vector<int>> &edges){
    unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;
    unordered_map<int,bool> isvisited;

    for(int i=0;i<V;i++){
        if(!isvisited[i]){
            vector<int> component;
            dfs(i,isvisited,adj,component);
            ans.push_back(component);
        }
    }

    return ans;
}

int main()
{

}