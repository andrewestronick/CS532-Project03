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
    Node *node = new Node;
    node->edge = new Edge(e);

    insertNode(node->edge->getStart(), node);

    if(!directed)
    {
        Node *rnode = new Node;
        rnode->edge = new Edge(e.getEnd(), e.getStart(), e.getWeight());

        insertNode(rnode->edge->getStart(), rnode);
    }
}


std::vector<Edge> Graph::getAdjecentList(int v)
{
    Node *ptr = vertices[v];
    std::vector<Edge> list;

    if(nullptr == ptr)
        return list;

    do
    {
        list.emplace_back(Edge(ptr->edge));
        ptr = ptr->next;
    } while(ptr != nullptr);

    return list;
}


Edge Graph::getEdge(int v1, int v2)
{
    if(nullptr == vertices[v1])
        return nullptr;

    Node *ptr = vertices[v1];

    while(ptr->next != nullptr)
    {
        if(ptr->edge->getEnd() == v2)
            return Edge(ptr->edge);

        ptr = ptr->next;
    }

    return nullptr;
}


int Graph::getNumVertices() const
{
    return size;
}


int Graph::getNumEdges() const
{
    return edges;
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
    ++edges;
}


void Graph::printLinkedListArray()
{
    for(int i = 0; i < size; ++i)
    {
        std::cout << "V[" << i << "]-->";
        Node *ptr = vertices[i];
        while(ptr != nullptr)
        {
            std::cout << "(start=" << ptr->edge->getStart() << " end=" << ptr->edge->getEnd() << ")-->";
            ptr = ptr->next;
        }
        std::cout << "NULL" << std::endl;
    }
}




