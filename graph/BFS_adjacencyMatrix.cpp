// BFS using adjacency matrix

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph
{
    vector<vector<int>> adj = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};
    int size = 7;

public:
    void BFS(int source)
    {
        vector<bool> visited(8, false);
        queue<int> q;
        visited[source] = true;
        q.push(source);

        while (!q.empty())
        {
            int top = q.front();
            cout << top << ",";
            q.pop();
            for (int i = 0; i< adj[top].size(); i++) {
                if (adj[top][i] == 1 && !visited[i]) {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }
};

int main()
{
    Graph g;
    g.BFS(0);
    return 0;
}