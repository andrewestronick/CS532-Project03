#include <iostream>
#include "edge.h"
#include "graph.h"

using namespace std;

int main()
{
    Graph g(5, 0, 0);
    g.addEdge(Edge(1,2));
    g.addEdge(Edge(1,3));
    g.printEdges();

    return 0;
}

