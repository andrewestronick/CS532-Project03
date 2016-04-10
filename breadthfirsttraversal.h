// Andrew Estronick
// April 10th, 2016
// Computer Science 532 - Advanced Data Structures

#ifndef BREADTHFIRSTTRAVERSAL_H
#define BREADTHFIRSTTRAVERSAL_H

#include <iostream>
#include <queue>
#include <vector>
#include "graph.h"
#include "edge.h"

class BreadthFirstTraversal
{
public:

    BreadthFirstTraversal(Graph &g, int start);
    ~BreadthFirstTraversal();

private:

    bool *vertices;
    std::queue<int> queue;
    int visit;
};

#endif // BREADTHFIRSTTRAVERSAL_H
