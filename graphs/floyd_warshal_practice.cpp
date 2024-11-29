#include <iostream>
#include <vector>
#include <climits>
using namespace std;

#define MAXN 100
#define INF INT_MAX

void initializeGraph(int graph[MAXN][MAXN],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                graph[i][j]=0;
            }
            else{
                graph[i][j]=INF;
            }
        }
    }
}

void readEdges(int graph[MAXN][MAXN],int m){
    for(int i=0;i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        graph[u][v] = w;
    }
}

void floydWarshall(int graph[MAXN][MAXN],int n){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(graph[i][k]!=INF && graph[k][j]!=INF){
                    graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
                }
            }
        }
    }
}

void printResult(int graph[MAXN][MAXN],int source,int sink){
    if(graph[source][sink]==INF){
        cout << "Nodes are unreaachable. Maximum flow is 0" << endl;
    } else{
        cout << "shortest path from node " << source << " to " << sink << " is : " << graph[source][sink] << endl;
    }
}

int main()
{
    int graph[MAXN][MAXN];
    int n,m;
    cin >> n >>m;

    initializeGraph(graph,n);
    readEdges(graph,m);

    floydWarshall(graph,n);

    int source,sink;

    cin >> source >> sink;
    printResult(graph,source,sink);
    return 0;

}