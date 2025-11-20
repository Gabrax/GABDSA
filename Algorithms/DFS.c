#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int vertices;
    int* adjSizes;
    int** adjacencyList;
} Graph;

Graph* createGraph(int vertices)
{
  Graph* g = malloc(sizeof(Graph));
  g->vertices = vertices;

  g->adjSizes = calloc(vertices, sizeof(int));
  g->adjacencyList = malloc(vertices * sizeof(int*));

  for (int i = 0; i < vertices; i++) g->adjacencyList[i] = NULL;

  return g;
}

void addEdge(Graph* g, int v, int w)
{
  g->adjSizes[v]++;

  g->adjacencyList[v] = realloc(g->adjacencyList[v],g->adjSizes[v] * sizeof(int));

  g->adjacencyList[v][g->adjSizes[v] - 1] = w;
}

void DFS(Graph* g, int startVertex)
{
  bool* visited = calloc(g->vertices, sizeof(bool));
  int* stack = malloc(g->vertices * sizeof(int));
  int top = -1;

  // Push start vertex
  stack[++top] = startVertex;

  while (top >= 0)
  {
    int vertex = stack[top--];

    if (!visited[vertex])
    {
      visited[vertex] = true;
      printf("%d ", vertex);

      // Push neighbors onto stack (reverse order to maintain order)
      for (int i = g->adjSizes[vertex] - 1; i >= 0; i--)
      {
        int adj = g->adjacencyList[vertex][i];

        if (!visited[adj]) stack[++top] = adj;
      }
    }
  }

  printf("\n");
  free(visited);
  free(stack);
}

void freeGraph(Graph* g)
{
  for (int i = 0; i < g->vertices; i++)
      free(g->adjacencyList[i]);

  free(g->adjacencyList);
  free(g->adjSizes);
  free(g);
}

int main(void)
{
  Graph* g = createGraph(6);

  addEdge(g, 0, 1);
  addEdge(g, 0, 2);
  addEdge(g, 1, 3);
  addEdge(g, 2, 4);
  addEdge(g, 2, 5);

  printf("DFS from vertex 0: ");
  DFS(g, 0);

  freeGraph(g);
  return 0;
}

//          0
//         / \
//        1   2
//       /   / \
//      3   4   5

// Start at 0 → visit → neighbors [1,2]

// Go to 1 → visit → neighbors [3]

// Go to 3 → visit → no neighbors → backtrack

// Backtrack to 0, next neighbor 2 → visit → neighbors [4,5]

// Go to 4 → visit → no neighbors → backtrack

// Go to 5 → visit → no neighbors → backtrack
