// create a graph with adjacency matrix and apply dfs

#include <iostream>
#include <vector>

using namespace std;

class Graph
{
    int size;
    vector<vector<int>> graph;

public:
    Graph(int size)
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
    void addEdge(int u, int v)
    {
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

public:
    void printGraph()
    {
        cout << "Graph" << endl;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << graph[i][j] << " ";
            }
            cout << endl;
        }
    }

public:
    void DFSRec(int source, vector<bool> &visited, vector<int> &dfs)
    {
        visited[source] = true;
        dfs.push_back(source);
        for (int i = 0; i < graph[source].size(); i++)
        {
            if (graph[source][i] == 1 && !visited[i])
                DFSRec(i, visited, dfs);
        }
    }

public:
    vector<int> DFS(int source)
    {
        vector<bool> visited(this->size, false);
        vector<int> dfs;
        DFSRec(source, visited, dfs);
        return dfs;
    }

public:
    void printDFS(vector<int> &dfs)
    {
        cout << "DFS" << endl;
        for (auto v : dfs)
        {
            cout << v << ",";
        }
        cout << endl;
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
    vector<int> dfs = g.DFS(4);
    g.printDFS(dfs);
    return 0;
}