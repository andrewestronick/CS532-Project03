#ifndef EDGE_H
#define EDGE_H


class Edge
{
public:

    Edge(int start, int end);
    Edge(int start, int end, int weight);
    Edge(const Edge &e);
    void init(int start, int end);
    int getStart(void);
    int getEnd(void);
    bool isDirected(void);
    bool isWeighted(void);
    double getWeight(void);
    void setStart(int start);
    void setEnd(int end);
    void setDirected(bool directed);
    void setWeighted(bool weighted);
    void setWeight(double weight);

private:

    int start;
    int end;
    bool directed;
    bool weighted = false;
    double weight;
};

#endif // EDGE_H
