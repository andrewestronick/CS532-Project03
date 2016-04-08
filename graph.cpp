#include "graph.h"

Graph::Graph(int n, bool directed, bool weighted)
{
    size = n;
    vertices = new Node*[size];
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

void Graph::printEdges()
{
    for(unsigned i = 0; i < edge.size(); ++i)
    {
        std::cout << "Edge(" << i << ") start=" << edge[i].getStart();
        std::cout << "   end=" << edge[i].getEnd() << std::endl;
    }
}




