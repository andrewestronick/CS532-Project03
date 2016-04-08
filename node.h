#ifndef NODE_H
#define NODE_H
#include "edge.h"

class Node
{
public:
    Node();
    Node(Edge *edge, Node *next);

private:
    Edge *edge;
    Node *next;
};

#endif // NODE_H
