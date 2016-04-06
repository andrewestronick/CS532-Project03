#include "graph.h"

Graph::Graph(int n, bool directed, bool weighted)
{
    edgeList = new Edge*[n];
    for(int i = 0; i < n; ++i)
        edgeList[i]=nullptr;

    this->directed = directed;
    this->weighted = weighted;

}


Graph::~Graph()
{
    for(int i = 0; i <stack; ++i )
        delete edgeList[i];

    delete edgeList;
}


void Graph::addEdge(Edge e)
{
   if(stack == vertices)
       return;

   edgeList[stack++] = new Edge(e);
}



