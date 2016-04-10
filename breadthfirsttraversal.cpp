#include "breadthfirsttraversal.h"

BreadthFirstTraversal::BreadthFirstTraversal(Graph &g, int start)
{
/*
void BFS(start)
{
    for all vertices v
        v.visited = false;

    start.visited = true;
    initialize a queue Q;
    Q.enqueue(start);

    while (Q is not empty)
    {
        v = Q.dequeue();
        pre_visit(v);
        for each vertex k adjacent to v
        {
            if (k.visited) continue;
            k.visited = true;
            Q.enqueue(k);
        }
        post_visit(v);
    }
}
*/
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
