#include <iostream>
#include <queue>
#include <vector>
using namespace std;


vector<int> bfsTraversal(int size,vector<vector<int>> &adj){
    vector<int> result;
    vector<bool> isvisited(size,false);

    queue<int> q;
    q.push(0);
    isvisited[0] = true;

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        result.push_back(curr);

        for(auto neighbour : adj[curr]){
            if(!isvisited[neighbour]){
                q.push(neighbour);
                isvisited[neighbour]=true;
            }
        }
    }
    return result;
}
int main()
{
    int v ,e;
    cin >> v >> e;
    vector<vector<int>> adj(v);
    for(int i =0;i<e;i++ ){
        int num1 , num2;
        cin >> num1 >> num2;
        adj[num1].push_back(num2);
        adj[num2].push_back(num1);
    }
    
    
    vector<int> result = bfsTraversal(v,adj);
    
    for(int node: result){
        cout << node <<  " ";
    }
    
    return 0;
}