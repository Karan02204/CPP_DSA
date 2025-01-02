#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>>& graph,int u, int v){
    graph[u][v] = 1;
}

void warshall(vector<vector<int>>& graph){
    int n= graph.size();

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }
}

void printGraph(vector<vector<int>>& graph){
    for(auto row : graph){
        for(int val : row){
            cout << val << " ";
        }
        cout << endl;
    }
}

int main()
{

}