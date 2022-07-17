// Create adjacency matrix of size 's' and apply BFS

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Graph
{
    vector<vector<int>> adj;
    int size;

public:
    Graph(int size)
    {
        for (int i = 0; i < size; i++)
        {
            adj.push_back({});
            for (int j = 0; j < size; j++)
            {
                adj[i].push_back(0);
            }
        }
        this->size = size;
    }

public:
    void addEdge(int u, int v)
    {
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

public:
    void printGraph(vector<int> bfs)
    {
        cout << "BFS" << endl;
        for (int &x : bfs)
        {
            cout << x << ",";
        }
        cout << endl;
    }

public:
    void printGraph()
    {
        cout << "Graph" << endl;
        for (vector<int> &u : adj)
        {
            for (int &v : u)
            {
                cout << v << " ";
            }
            cout << endl;
        }
    }

public:
    vector<int> BFS(int source)
    {
        vector<bool> visited(this->size, false);
        queue<int> q;
        vector<int> bfs;

        visited[source] = true;
        q.push(source);
        while (!q.empty())
        {
            int top = q.front();
            q.pop();
            bfs.push_back(top);
            for (int i = 0; i < adj[top].size(); i++)
            {
                if (adj[top][i] == 1 && !visited[i]) {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
        return bfs;
    }
};

int main()
{
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(4, 6);
    g.printGraph();
    vector<int> bfs = g.BFS(0);
    g.printGraph(bfs);
}