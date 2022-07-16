// BFS of a discontinuous graph in adjacency list

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
        adj = new vector<int>[size];
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
        // cout << "Graph" << endl;
        for (int i = 0; i < this->size; i++)
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
        cout << "Graph" << endl;
        for (int i : v)
        {
            cout << i << ",";
        }
        cout << endl;
    }

public:
    vector<int> BFSDiscontinuous()
    {
        vector<int> bfsVector;
        vector<bool> visited(this->size, false);
        for (int i = 0; i < this->size; i++)
        {
            if (!visited[i])
            {
                BFS(i, bfsVector, visited);
            }
        }
        return bfsVector;
    }

private:
    void BFS(int source, vector<int> &bfsVector, vector<bool> &visited)
    {

        queue<int> q;
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
    }
};

int main()
{
    Graph g(10);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(4, 5);
    g.addEdge(4, 6);
    g.addEdge(5, 6);
    g.addEdge(7, 8);
    g.addEdge(7, 9);
    g.printGraph();
    vector<int> bfsvector = g.BFSDiscontinuous();
    g.printGraph(bfsvector);
    return 0;
}