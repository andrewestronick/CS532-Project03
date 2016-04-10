// Andrew Estronick
// April 10th, 2016
// Computer Science 532 - Advanced Data Structures

#ifndef DEPTHFIRSTTRAVERSAL_H
#define DEPTHFIRSTTRAVERSAL_H

#include <iostream>
#include <vector>
#include "graph.h"

class DepthFirstTraversal
{
public:
    DepthFirstTraversal(Graph &g, int start);

private:

    bool *vertices;

    void rdfs(Graph &g, int vertex);
};

#endif // DEPTHFIRSTTRAVERSAL_H
