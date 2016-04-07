#include "edge.h"


Edge::Edge(int start, int end)
{
    init(start, end);
}


Edge::Edge(int start, int end, int weight)
{
    weighted = true;
    this->weight = weight;
    init(start, end);
}


Edge::Edge(const Edge &e)
{
    if(e.weighted)
    {
        weighted = true;
        weight = e.weight;
        init(e.start, e.end);
    }
    else
        init(e.start, e.end);
}

void Edge::init(int start, int end)
{
    this->start = start;
    this->end = end;
}


int Edge::getStart()
{
    return start;
}


int Edge::getEnd()
{
    return end;
}


bool Edge::isDirected()
{
    return directed;
}


bool Edge::isWeighted()
{
    return weighted;
}


double Edge::getWeight()
{
    return weight;
}


void Edge::setStart(int start)
{
    this->start = start;
}



void Edge::setEnd(int end)
{
    this->end = end;
}


void Edge::setDirected(bool directed)
{
    this->directed = directed;
}


void Edge::setWeighted(bool weighted)
{
    this->weighted = weighted;
}


void Edge::setWeight(double weight)
{
    this->weight = weight;
}





