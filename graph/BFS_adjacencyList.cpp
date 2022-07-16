// BFS using adjacency list

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
        adj = new vector<int>[size + 1];
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
        for (int i = 0; i <= this->size; i++)
        {
            cout << i << "->";
            for (int v : adj[i])
            {
                cout << v << ",";
            }
            cout << endl;
        }
    }

public:
    void printGraph(vector<int> v)
    {
        cout << "BFS" << endl;
        for (auto x : v)
        {
            cout << x << ",";
        }
        cout << endl;
    }

public:
    vector<int> BFS(int source)
    {
        vector<int> visited(this->size + 1, false);
        queue<int> q;
        vector<int> bfsVector;

        visited[source] = true;
        q.push(source);

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
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 1);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.printGraph();
    vector<int> bfsVector = g.BFS(0);
    g.printGraph(bfsVector);
}