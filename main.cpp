#include<iostream>
#include<vector>
#include "edge.h"
#include "graph.h"


using namespace std;

int main()
{
    Graph g(5, 0, 0);


    g.addEdge(Edge(0,1));
    g.addEdge(Edge(0,2));
    g.addEdge(Edge(0,3));
    Edge e(0,4);
    g.addEdge(e);
    g.printLinkedListArray();
    std::vector<Edge> list = g.getAdjecentList(4);
    std::cout << "size=" << list.size() << std::endl;
    std::cout << "# of edges = " << g.getNumEdges() << std::endl;

    return 0;
}

