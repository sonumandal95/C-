// create a graph and apply DFS traversal on it

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
        cout << "Graph" << endl;
        for (int i = 0; i < this->size; i++)
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
    void DFS(int source, vector<bool> &visited, vector<int> &dfs)
    {
        visited[source] = true;
        dfs.push_back(source);
        for (auto v : adj[source])
        {
            if (!visited[v])
                DFS(v, visited, dfs);
        }
    }

public:
    vector<int> DFSRec()
    {
        vector<bool> visited(size, false);
        vector<int> dfs;
        for (int i = 0; i < size; i++)
        {
            if (!visited[i])
                DFS(i, visited, dfs);
        }
        return dfs;
    }

public:
    void printDFS(vector<int> &dfs)
    {
        cout<<"DFS"<<endl;
        for(auto v: dfs) {
            cout<<v<<",";
        }
        cout<<endl;
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
    vector<int> dfs = g.DFSRec();
    g.printDFS(dfs);
    return 0;
}