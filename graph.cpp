#include "graph.h"

Graph::Graph(int n, bool directed, bool weighted)
{
    size = n;
    vertices = new Edge*[size];
    this->directed = directed;
    this->weighted = weighted;


}


Graph::~Graph()
{
    delete vertices;
}

void Graph::addEdge(const Edge &e)
{
    edge.emplace_back(e);
}




