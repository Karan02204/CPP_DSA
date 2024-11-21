
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.
    vector<int> result;
    vector<bool> isVisited(n,false);
    queue<int> q;

    // start from node 0;
    q.push(0);
    isVisited[0] = true;

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        //add the current node to result;
        result.push_back(curr);

        //traverse all the adjacent nodes of current;

        for(auto neighbour : adj[curr]){
            if(!isVisited[neighbour]){
                q.push(neighbour);
                isVisited[neighbour] = true;
            }
        }
    }   

    return result;
}

int main()
{
    
}