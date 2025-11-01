#include <iostream>
#include <vector>
#include <iomanip>

const int MAX_VERTICES = 100;

// --- Edge List ---
struct Edge {
    int src, dest;
};

// --- Graph Representations ---
class Graph {
private:
    int V; // Number of vertices
    int E; // Number of edges
    std::vector<std::vector<int>> adjMatrix;
    std::vector<std::vector<int>> adjList;
    std::vector<Edge> edgeList;
    std::vector<std::vector<int>> incidenceMatrix;

public:
    Graph(int vertices);

    void addEdge(int src, int dest);

    void printAdjMatrix();
    void printAdjList();
    void printEdgeList();
    void printIncidenceMatrix();
};

Graph::Graph(int vertices) {
    V = vertices;
    E = 0;
    adjMatrix.resize(V, std::vector<int>(V, 0));
    adjList.resize(V);
}

void Graph::addEdge(int src, int dest) {
    // Adjacency Matrix
    adjMatrix[src][dest] = 1;
    adjMatrix[dest][src] = 1; // For undirected graph

    // Adjacency List
    adjList[src].push_back(dest);
    adjList[dest].push_back(src);

    // Edge List
    edgeList.push_back({src, dest});
    E++;

    // Incidence Matrix
    incidenceMatrix.clear(); // Rebuild it
    incidenceMatrix.resize(V, std::vector<int>(E));

    for (int i = 0; i < edgeList.size(); ++i) {
        int u = edgeList[i].src;
        int v = edgeList[i].dest;
        incidenceMatrix[u][i] = 1;
        incidenceMatrix[v][i] = 1;
    }
}

void Graph::printAdjMatrix() {
    std::cout << "\nAdjacency Matrix:\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j)
            std::cout << adjMatrix[i][j] << " ";
        std::cout << '\n';
    }
}

void Graph::printAdjList() {
    std::cout << "\nAdjacency List:\n";
    for (int i = 0; i < V; ++i) {
        std::cout << i << ": ";
        for (int neighbor : adjList[i])
            std::cout << neighbor << " ";
        std::cout << '\n';
    }
}

void Graph::printEdgeList() {
    std::cout << "\nEdge List:\n";
    for (const auto& edge : edgeList) {
        std::cout << edge.src << " - " << edge.dest << '\n';
    }
}

void Graph::printIncidenceMatrix() {
    std::cout << "\nIncidence Matrix:\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < E; ++j)
            std::cout << std::setw(2) << incidenceMatrix[i][j] << " ";
        std::cout << '\n';
    }
}

// --- Main ---
int main() {
    Graph g(5); // 5 vertices: 0 to 4

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.printAdjMatrix();
    g.printAdjList();
    g.printEdgeList();
    g.printIncidenceMatrix();

    return 0;
}

