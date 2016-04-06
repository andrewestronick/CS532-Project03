#ifndef GRAPH_H
#define GRAPH_H
#include "edge.h"

class Graph
{
public:
    Graph(int n, bool directed, bool weighted);
    ~Graph();
    void addEdge(Edge e);
    void getAdjecentList(int v);
    Edge getEdge(int v1, int v2);
    int getNumVertices(void);
    int getNumEdges(void);


private:
    int vertices;
    bool directed;
    bool weighted;
    int stack = 0;
    Edge** edgeList;

};

#endif // GRAPH_H
