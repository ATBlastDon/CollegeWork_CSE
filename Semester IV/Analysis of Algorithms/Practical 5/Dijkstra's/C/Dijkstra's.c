// C program for implementation of Dijkstra

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define V 6

int graph[V][V] = { {0, 4, 0, 0, 0, 0},
                    {4, 0, 8, 0, 0, 0},
                    {0, 8, 0, 7, 0, 4},
                    {0, 0, 7, 0, 9, 14},
                    {0, 0, 0, 9, 0, 10},
                    {0, 0, 4, 14, 10, 0} };

void dijkstra(int src) {
    int dist[V];
    int visited[V];
    int i, count;
    for (i = 0; i < V; i++) {
	dist[i] = INT_MAX;
	visited[i] = 0;
    }
    dist[src] = 0;

    for (count = 0; count < V - 1; count++) {
	int i, u, v, min_dist = INT_MAX;
	for (i = 0; i < V; i++) {
	    if (visited[i] == 0 && dist[i] <= min_dist) {
		min_dist = dist[i];
		u = i;
	    }
	}

	visited[u] = 1;

	for (v = 0; v < V; v++) {
	    if (visited[v] == 0 && graph[u][v] != 0 && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
		dist[v] = dist[u] + graph[u][v];
	}
    }

    printf("Vertex   Distance from Source\n");
    for (i = 0; i < V; i++)
	printf("%d \t\t %d\n", i, dist[i]);
}

void main()
{
    clrscr();
    dijkstra(0);
    getch();
}
