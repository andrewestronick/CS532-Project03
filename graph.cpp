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

    insertNode(node->edge->getStart(), node);
    if(!directed)
        insertNode(node->edge->getEnd(), node);
}

void Graph::insertNode(int vertex, Node *node)
{
    if(nullptr == vertices[vertex])
    {
        vertices[vertex] = node;
    }
    else
    {
        Node *ptr = vertices[vertex];
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


void Graph::printLinkedListArray()
{
    for(int i = 0; i < size; ++i)
    {
        std::cout << "V[" << i << "]-->";

        if(nullptr == vertices[i])
            std::cout << "NULL" << std::endl;
        else
        {
            Node *ptr = vertices[i];

            while(ptr != nullptr)
            {
                std::cout << "(start=" << ptr->edge->getStart() << " end=" << ptr->edge->getEnd() << ")-->";
                ptr = ptr->next;
            }

            std::cout << "NULL" << std::endl;
        }
    }
}




