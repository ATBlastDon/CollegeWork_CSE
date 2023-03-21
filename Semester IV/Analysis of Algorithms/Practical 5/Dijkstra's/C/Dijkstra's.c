#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define V 6 // Number of vertices in the graph

int graph[V][V] = { {0, 4, 0, 0, 0, 0},
                    {4, 0, 8, 0, 0, 0},
                    {0, 8, 0, 7, 0, 4},
                    {0, 0, 7, 0, 9, 14},
                    {0, 0, 0, 9, 0, 10},
                    {0, 0, 4, 14, 10, 0} }; // Graph representation as 2D array

void dijkstra(int src) {
    int dist[V]; // Array to hold the shortest distance from src to i
    int visited[V]; // Array to mark visited vertices

    // Initialize all distances as infinite and visited[] as 0
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }

    // Distance of source vertex from itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
        // Find the vertex with the minimum distance value
        int u, min_dist = INT_MAX;
        for (int i = 0; i < V; i++) {
            if (visited[i] == 0 && dist[i] <= min_dist) {
                min_dist = dist[i];
                u = i;
            }
        }

        // Mark the picked vertex as visited
        visited[u] = 1;

        // Update dist value of the adjacent vertices of the picked vertex.
        for (int v = 0; v < V; v++) {
            // Update dist[v] only if it's not visited, there is an edge from u to v, and total weight of path from src to v through u is smaller than current value of dist[v]
            if (visited[v] == 0 && graph[u][v] != 0 && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
        }
    }

    // Print the shortest path to all vertices
    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < V; i++)
        printf("%d \t\t %d\n", i, dist[i]);
}

int main() {
    dijkstra(0); // Compute shortest path from vertex 0

    return 0;
}
