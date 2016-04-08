#include "graph.h"
#include <typeinfo>

Graph::Graph(int n, bool directed, bool weighted)
{
    size = n;
    vertices = new Node*[size];
    for(int i = 0; i < size; ++i)
        vertices[i] = nullptr;

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
    Node *node = new Node;
    node->edge = &edge.back();

    if(nullptr == vertices[node->edge->getStart()])
    {
        vertices[node->edge->getStart()] = node;
    }
    else
    {
        Node *ptr = vertices[node->edge->getStart()];
        while(ptr->next != nullptr)
            ptr = ptr->next;
        ptr->next = node;
    }

}

void Graph::printEdges()
{
    for(unsigned i = 0; i < edge.size(); ++i)
    {
        std::cout << "Edge(" << i << ") start=" << edge[i].getStart();
        std::cout << "   end=" << edge[i].getEnd() << std::endl;
    }
}




