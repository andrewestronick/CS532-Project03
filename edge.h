#ifndef EDGE_H
#define EDGE_H


class Edge
{
public:

    Edge();
    int getStart(void);
    int getEnd(void);
    bool isDirected(void);
    bool isWeighted(void);
    double getWeight(void);
    void setStart(int startVertex);
    void setEnd(int endVertex);
    void setDirected(bool directed);
    void setWeighted(bool weighted);
    void setWeight(double weight);

protected:
    Edge* getNextEdge(void);
    void setNextEdge(Edge *edge);

private:

    int startVertex;
    int endVertex;
    bool directed;
    bool weighted;
    double weight;
    Edge *nextEdge = nullptr;
};

#endif // EDGE_H
