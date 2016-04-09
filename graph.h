#ifndef GRAPH_H
#define GRAPH_H
#include<vector>
#include<iostream>
#include "edge.h"

struct Node
{
    Edge *edge = nullptr;
    Node *next = nullptr;
};

class Graph
{
public:

    Graph(int n, bool directed, bool weighted);
    ~Graph();
    void addEdge(const Edge &e);
    void getAdjecentList(int v);
    Edge getEdge(int v1, int v2);
    int getNumVertices(void);
    int getNumEdges(void);
    void insertNode(int vertex, Node *node);
    void printEdges(void);
    void printLinkedListArray(void);


private:

    Node **vertices;
    int size;
    bool directed;
    bool weighted;
    std::vector<Edge> edge;

};

#endif // GRAPH_H
