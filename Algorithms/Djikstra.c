#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct {
  int from;
  int to;
  int weight;
} Edge;

typedef struct {
  Edge* edges;  
  int E;
  int V;          
} Graph;

void addEdge(Graph* g, int u, int v, int w)
{
  g->edges[g->E].from = u;
  g->edges[g->E].to = v;
  g->edges[g->E].weight = w;
  g->E++;
}

void Dijkstra(Graph* g, int start)
{
  int V = g->V;
  int* dist = malloc(V * sizeof(int));
  int* visited = calloc(V, sizeof(int));

  for (int i = 0; i < V; i++) dist[i] = INT_MAX;
  dist[start] = 0;

  for (int i = 0; i < V - 1; i++)
  {
    int min = INT_MAX, from = -1;

    for (int vert = 0; vert < V; vert++)
    {
      if (!visited[vert] && dist[vert] < min)
      {
        min = dist[vert], from = vert;
      }
    }

    if (from == -1) break;
    visited[from] = 1;

    for (int edge = 0; edge < g->E; edge++)
    {
      if (g->edges[edge].from == from)
      {
        int to = g->edges[edge].to;
        int weight = g->edges[edge].weight;

        if (!visited[to] && dist[from] + weight < dist[to])
        {
          dist[to] = dist[from] + weight;
        }
      }
    }
  }

  printf("Final shortest distances from %d:\n", start);
  for (int i = 0; i < V; i++)
      printf("%d -> %d = %s%d\n",start, i,dist[i] == INT_MAX ? "INF" : "",dist[i]);

  free(dist);
  free(visited);
}

int main()
{
    Graph g;
    g.V = 5;
    g.E = 0;
    g.edges = malloc(20 * sizeof(Edge)); // max edges

    addEdge(&g, 0, 1, 10);
    addEdge(&g, 0, 4, 5);
    addEdge(&g, 1, 2, 1);
    addEdge(&g, 4, 1, 3);
    addEdge(&g, 4, 2, 9);
    addEdge(&g, 2, 3, 4);
    addEdge(&g, 4, 3, 2);

    Dijkstra(&g, 0);

    free(g.edges);
    return 0;
}
