// create a graph an dapply BFS

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph
{
    vector<int> *adj;
    int size;

public:
    Graph(int size)
    {
        this->size = size;
        adj = new vector<int>[size + 1];
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
        for (int i = 1; i <= this->size; i++)
        {
            cout << i << "->";
            for (auto v : adj[i])
            {
                cout << v << ",";
            }
            cout << endl;
        }
    }

public:
    vector<int> BFS(int source)
    {
        vector<bool> visited(this->size + 1, false);
        vector<int> bfsVector;
        queue<int> q;

        q.push(source);
        visited[source] = true;
        while (!q.empty())
        {
            int top = q.front();
            q.pop();
            bfsVector.push_back(top);
            for (int v : adj[top])
            {
                if (!visited[v])
                {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        return bfsVector;
    }
};

int main()
{
    Graph g(5);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 5);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.printGraph();
    vector<int> bfsVector = g.BFS(1);
    for (auto i : bfsVector)
    {
        cout << i << ",";
    }
}