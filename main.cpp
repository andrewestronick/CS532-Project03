// Andrew Estronick
// April 10th, 2016
// Computer Science 532 - Advanced Data Structures

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "edge.h"
#include "graph.h"
#include "breadthfirsttraversal.h"
#include "depthfirsttraversal.h"


void test(const std::string file);

int main()
{
    test("F:\\Andrew\\_code\\CS532\\CS532-Project03\\firstRun.txt");
    test("F:\\Andrew\\_code\\CS532\\CS532-Project03\\secondRun.txt");
    return 0;
}

void test(const std::string file)
{
    std::ifstream fin;

    fin.open(file);
    if(fin.is_open())
    {
        int vertices;
        bool directed;
        bool weighted;
        char flag;
        std::string buff;
        int start, end, weight;

        fin >> vertices;
        fin >> flag;
        directed = ('D' == flag);
        fin >> flag;
        weighted = ('W' == flag);
        std::cout << "vertices=" << vertices << "  directed=" << directed << "  weighted=" << weighted << std::endl;

        Graph g(vertices, directed, weighted);

        while(!fin.eof())
        {
            if(weighted)
            {
                fin >> start >>  end >> weight;
                g.addEdge(Edge(start, end, weight));
            }
            else
            {
                fin >> start >> end;
                g.addEdge(Edge(start, end));
            }
       }

       // g.printLinkedListArray();
       BreadthFirstTraversal bft(g,0);
       DepthFirstTraversal dfs(g,0);
       std::cout << "----------------------------------------" << std::endl;


    }
}
