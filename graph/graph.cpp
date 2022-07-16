// write a class to create an undirected graph using adjacency list
/* 
    0 ------1 -------3
      ------2
*/

#include <iostream>
#include <vector>
using namespace std;

class Graph
{
    vector<int> *adj;
    int size;
public:
    Graph(int size)
    {
        adj = new vector<int>[size];
        this->size = size;
    }

public:
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

public:
    void printGraph()
    {
        for (int i = 0; i < size; i++)
        {
            cout<<i<<"->";
            for(int v: adj[i]) {
                cout<<v<<",";
            }
            cout<<endl;
        }
    }
};

int main() {
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.printGraph();
}