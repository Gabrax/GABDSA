#include <stdio.h>
#include <limits.h>

typedef struct {
    int from;      // początek krawędzi
    int to;      // koniec krawędzi
    int weight;      // waga
} Edge;

void BellmanFord(Edge edges[], int E, int V, int start)
{
  int dist[V];

  for (int i = 0; i < V; i++) dist[i] = INT_MAX;

  dist[start] = 0;

  for (int i = 0; i < V; i++)
  {
    for (int j = 0; j < E; j++)
    {
      int from = edges[j].from;
      int to = edges[j].to;
      int weight = edges[j].weight;

      if (dist[from] != INT_MAX && dist[from] + weight < dist[to])
      {
        if (i == (V-1))
        {
          printf("Negative cycle detected!\n");
          return;
        }

        dist[to] = dist[from] + weight;
      }
    }
  }

  // Wyniki
  printf("Najkrotsze odleglosci od %d:\n", start);
  for (int i = 0; i < V; i++)
  {
    if (dist[i] == INT_MAX) printf("%d -> %d: brak sciezki\n", start, i);
    else printf("%d -> %d: %d\n", start, i, dist[i]);
  }
}

int main()
{
  int V = 5;   // liczba wierzchołków
  int E = 5;   // liczba krawędzi

  Edge edges[] = {
      {1, 3, 2}, 
      {4, 3, -1},
      {2, 4, 1}, 
      {1, 2, 1},
      {0, 1, 5} 
  };

  BellmanFord(edges, E, V, 0);

  return 0;
}
