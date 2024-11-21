#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph{
    public:
    unordered_map<int, list<int>> adj;
    // if direction = 0 -> undirected graph , 
    //if direction=1 -> directed
    void addEdge(int node1,int node2,bool direction){
        adj[node1].push_back(node2); // can go from node1 to node2
          if(direction==0) adj[node2].push_back(node1); // undirected
    }

    void printAdjList(){
        for(auto i : adj){
            cout << i.first <<  "->";
            for(auto j: i.second){
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n,m;
    Graph g;
    cout << "Enter the number of nodes: " << endl;
    cin>> n;
    cout << "Enter the number of edges: " << endl;
    cin >> m;

    for(int i=0;i<m;i++){
        int node1 , node2;
        cin >> node1 >> node2;
        g.addEdge(node1,node2,0);
    }

    g.printAdjList();
    
}