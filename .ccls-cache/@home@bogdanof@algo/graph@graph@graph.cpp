#include "graph.h"

std::ostream& operator<<(std::ostream& os, const Edge& edge) {
    os << edge.From << "->" << edge.To;
    if (edge.Weight != 1) {
        os << " (" << edge.Weight << ")";
    } 
    return os;
}
AdjacencyLists& Normalize(AdjacencyLists& adjacencyLists) {
    for (auto& adjList : adjacencyLists) {
        std::sort(adjList.begin(), adjList.end());
    }
    return adjacencyLists;
}

