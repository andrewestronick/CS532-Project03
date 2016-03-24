#include "edge.h"

Edge::Edge()
{

}


int Edge::getStart()
{
    return startVertex;
}


int Edge::getEnd()
{
    return endVertex;
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


void Edge::setStart(int startVertex)
{
    this->startVertex = startVertex;
}


void Edge::setEnd(int endVertex)
{
    this->endVertex= endVertex;
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



