#include "depthfirsttraversal.h"

DepthFirstTraversal::DepthFirstTraversal(Graph &g, int start)
{
/*
void DFS(start)
{
    for all vertices v
        v.visited = false;

    RDFS(start);
}

void RDFS(v)
{
    pre_visit(v);
    v.visited = true;

    for each vertex k adjacent to v
    {
        if (k.visited) continue;
        RDFS(k);
    }

    post_visit(v);
}
*/
    int size = g.getNumVertices();
    vertices = new bool[size];
    for(int i = 0; i < size; ++i)
        vertices[i] = false;

    rdfs(g, start);
    std::cout << std::endl;
}


void DepthFirstTraversal::rdfs(Graph &g, int vertex)
{
    std::cout << "{" << vertex << "} ";
    vertices[vertex] = true;

    std::vector<Edge> list = g.getAdjecentList(vertex);
    for(unsigned i = 0; i < list.size(); ++i)
    {
        if(vertices[list[i].getEnd()])
            continue;
        rdfs(g, list[i].getEnd());
    }
}
