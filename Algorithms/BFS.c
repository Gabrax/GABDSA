#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Breadth-First Search (BFS) is a graph traversal algorithm that explores all the vertices of a graph in breadthward motion,
// meaning it explores all the vertices at the current level before moving on to the next level.
// It is often used to find the shortest path between two nodes in an unweighted graph or to visit all nodes in a connected component of a graph.


// https://en.wikipedia.org/wiki/Breadth-first_search
typedef struct {
    int vertices;
    int* adjSizes;         // ile sąsiadów ma każdy wierzchołek
    int** adjacencyList;   // tablica list sąsiadów
} Graph;

Graph* createGraph(int vertices)
{
  Graph* g = malloc(sizeof(Graph));
  g->vertices = vertices;

  g->adjSizes = calloc(vertices, sizeof(int));       // wszystkie rozmiary = 0
  g->adjacencyList = malloc(vertices * sizeof(int*)); // listy sąsiadów

  for (int i = 0; i < vertices; i++) {
      g->adjacencyList[i] = NULL; // na razie brak sąsiadów
  }

  return g;
}

void addEdge(Graph* g, int v, int w)
{
  g->adjSizes[v]++; // zwiększamy licznik
  g->adjacencyList[v] = realloc(g->adjacencyList[v],g->adjSizes[v] * sizeof(int));
  g->adjacencyList[v][g->adjSizes[v] - 1] = w;
}

void BFS(Graph* g, int startVertex)
{
  bool* visited = calloc(g->vertices, sizeof(bool));
  int* queue = malloc(g->vertices * sizeof(int));

  int front = 0;
  int back = 0;

  visited[startVertex] = true;
  queue[back++] = startVertex;

  while (front < back)
  {
    int current = queue[front++];
    /*printf("%d ", current);*/

    // przechodzenie sąsiadów
    for (int i = 0; i < g->adjSizes[current]; i++)
    {
      int adj = g->adjacencyList[current][i];
      printf("Neighbour of %d is %d\n", current,adj);
      if (!visited[adj])
      {
          visited[adj] = true;
          queue[back++] = adj;
      }
    }
  }

  free(visited);
  free(queue);
}

void freeGraph(Graph* g)
{
  for (int i = 0; i < g->vertices; i++) {
      free(g->adjacencyList[i]);
  }
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

  printf("BFS from vertex 0: ");
  BFS(g, 0);
  printf("\n");

  freeGraph(g);
  return 0;
}

//          0
//         / \
//        1   2
//       /   / \
//      3   4   5
//
// Start at 0 → mark visited → enqueue neighbors [1,2]

// Dequeue 1 → mark visited → enqueue neighbor [3]

// Dequeue 2 → mark visited → enqueue neighbors [4,5]

// Dequeue 3 → no new neighbors

// Dequeue 4 → no new neighbors

// Dequeue 5 → no new neighbors
