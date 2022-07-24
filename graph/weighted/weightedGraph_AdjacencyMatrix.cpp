// create a weighted graph using adjacency matrix

#include <iostream>
#include <vector>

using namespace std;

class WeightedGraph
{
    int size;
    vector<vector<int>> graph;

public:
    WeightedGraph(int size)
    {
        this->size = size;
        for (int i = 0; i < size; i++)
        {
            graph.push_back({});
            for (int j = 0; j < size; j++)
            {
                graph[i].push_back(0);
            }
        }
    }

public:
    void addEdge(int u, int v, int weight)
    {
        graph[u][v] = graph[v][u] = weight;
    }

public:
    void printGraph()
    {
        cout << "Weighted graph" << endl;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout<<graph[i][j]<<"   ";
            }
            cout<<endl;
        }
    }
};

int main () {
    WeightedGraph g(5);
    g.addEdge(0,1,10);
    g.addEdge(0,4,20);
    g.addEdge(1,2,30);
    g.addEdge(1,3,40);
    g.addEdge(1,4,50);
    g.addEdge(2,3,60);
    g.addEdge(3,4,70);
    g.printGraph();
    return 0;
}