#include <iostream>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;

#define MAXN 100  // Maximum number of nodes
#define INF INT_MAX  // Infinity for unreachable nodes

// Function to initialize the graph with INF distances
void initializeGraph(int graph[MAXN][MAXN], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                graph[i][j] = 0; // Distance to self is 0
            } else {
                graph[i][j] = INF; // Initialize others with INF
            }
        }
    }
}

// Function to read edges and build the graph
void readEdges(int graph[MAXN][MAXN], int m) {
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w; // Read edge (u -> v) with weight w
        graph[u][v] = w; // Add edge to the adjacency matrix
    }
}

// Floyd-Warshall Algorithm to find shortest paths
void FloydWarshall(int graph[MAXN][MAXN], int n) {
    for (int k = 0; k < n; k++) { // Intermediate nodes
        for (int i = 0; i < n; i++) { // Source nodes
            for (int j = 0; j < n; j++) { // Destination nodes
                // Update shortest path if passing through k is better
                if (graph[i][k] != INF && graph[k][j] != INF) {
                    graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
                }
            }
        }
    }
}

// Function to print the result
void printResult(int graph[MAXN][MAXN], int source, int sink) {
    if (graph[source][sink] == INF) {
        cout << "Nodes are unreachable. Maximum flow is 0." << endl;
    } else {
        cout << "Shortest path from node " << source << " to " << sink << " is: " << graph[source][sink] << endl;
    }
}

int main() {
    int graph[MAXN][MAXN];
    int n, m; // Number of nodes and edges
    cin >> n >> m;

    initializeGraph(graph, n);
    readEdges(graph, m);

    FloydWarshall(graph, n);

    int source, sink;
    cin >> source >> sink; // Input source and sink nodes
    printResult(graph, source, sink);

    return 0;
}
