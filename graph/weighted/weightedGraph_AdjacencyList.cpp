// Create a weighted graph and print the graph

#include<iostream>
#include<vector>
#include<map>
#include<iterator>
#include<utility>

using namespace std;

class WeightedGraph {
    int size;
    map<int, vector<pair<int, int>>> graph;
    public: WeightedGraph(int size) {
        this->size = size;
    }
    public: void addEdge(int u, int v, int weight) {
        graph[u].push_back({v, weight});
        graph[v].push_back({u, weight});
    }
    public: void printGraph() {
        cout<<"Weighted graph"<<endl;
        for(int i = 0; i< size; i++) {
            cout<<i<<"-> ";
            for(auto vertex: graph[i]) {
                cout<<vertex.first<<"("<<vertex.second<<"), ";
            }
            cout<<endl;
        }
    }
};

int main() {
    WeightedGraph g(5);
    g.addEdge(0, 1, 10);
    g.addEdge(0, 4, 20);
    g.addEdge(1, 2, 30);
    g.addEdge(1, 3, 40);
    g.addEdge(1, 4, 50);
    g.addEdge(2, 3, 60);
    g.addEdge(3, 4, 70);
    g.printGraph();
    return 0;
}