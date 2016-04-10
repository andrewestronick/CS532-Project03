// Andrew Estronick
// April 10th, 2016
// Computer Science 532 - Advanced Data Structures

#include "depthfirsttraversal.h"


DepthFirstTraversal::DepthFirstTraversal(Graph &g, int start)
{
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
