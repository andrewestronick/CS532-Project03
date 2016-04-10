// Andrew Estronick
// April 10th, 2016
// Computer Science 532 - Advanced Data Structures

#include "breadthfirsttraversal.h"


BreadthFirstTraversal::BreadthFirstTraversal(Graph &g, int start)
{
    int size = g.getNumVertices();
    vertices = new bool[size];
    for(int i = 0; i < size; ++i)
        vertices[i] = false;

    vertices[start] = true;
    queue.push(start);

    std::cout << std::endl;

    while(!queue.empty())
    {
        visit = queue.front();
        queue.pop();
        std::cout << "{" << visit << "} ";
        {
            std::vector<Edge> list = g.getAdjecentList(visit);
            for(unsigned i = 0; i < list.size(); ++i)
            {
                if(vertices[list[i].getEnd()])
                    continue;
                vertices[list[i].getEnd()] = true;
                queue.push(list[i].getEnd());
            }
        }
    }
    std::cout << std::endl;
}


BreadthFirstTraversal::~BreadthFirstTraversal()
{
    delete vertices;
}
