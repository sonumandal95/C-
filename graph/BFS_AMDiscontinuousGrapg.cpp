// BFS of Adjacency matrix of a discontinuous Graph

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph
{
    vector<vector<int>> adj;
    int size;

public:
    Graph(int size)
    {
        this->size = size;
        for (int i = 0; i < size; i++)
        {
            adj.push_back({});
            for (int j = 0; j < size; j++)
            {
                adj[i].push_back(0);
            }
        }
    }

public:
    void addEdge(int u, int v)
    {
        adj[u][v] = adj[v][u] = 1;
    }

public:
    void printGraph()
    {
        cout << "Graph" << endl;
        for (int i = 0; i < this->size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }

public:
    vector<int> BFS(int source, vector<bool> &visited, vector<int> &bfs)
    {
        queue<int> q;

        visited[source] = true;
        q.push(source);

        while (!q.empty())
        {
            int top = q.front();
            q.pop();
            bfs.push_back(top);

            for (int v:adj[top])
            {
                if (v == 1 && !visited[v])
                {
                    q.push(v);
                    visited[v] = true;
                }
            }
        }
    }

public:
    void printBfs(vector<int> bfs)
    {
        cout << "BFS" << endl;
        for (int v : bfs)
        {
            cout << v << ",";
        }
    }

public:
    vector<int> BFSDiscontinuos()
    {
        vector<bool> visited(this->size, false);
        vector<int> bfs;
        for (int i = 0; i < this->size; i++)
        {
            // visited[source] = true;
            if (!visited[i])
            {
                BFS(i, visited, bfs);
            }
        }
        return bfs;
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
    vector<int> bfs = g.BFSDiscontinuos();
    g.printBfs(bfs);
}