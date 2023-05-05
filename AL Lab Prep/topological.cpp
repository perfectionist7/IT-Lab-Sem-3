#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int c;
class Graph
{
    int V;
    vector<int> *adj;
    void topological(int v, bool visited[], stack<int> &Stack);

public:
    Graph(int V);
    void addEdge(int v, int w);
    void toposort();
};
Graph::Graph(int V)
{

    this->V = V;

    adj = new vector<int>[V];
}
void Graph::addEdge(int v, int w)
{

    adj[v].push_back(w);
}
void Graph::topological(int v, bool visited[], stack<int> &Stack)
{

    visited[v] = true;

    vector<int>::iterator i;

    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        if (!visited[*i])
            topological(*i, visited, Stack);
    }
    Stack.push(v);
}
void Graph::toposort()
{
    stack<int> Stack;
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
        {
            topological(i, visited, Stack);
        }
    }

    while (Stack.empty() == false)
    {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}
int main()
{
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    cout << "Following is a Topological Sort of the given graph \n";
    g.toposort();
    cout << "\nStep count is " << c;
    return 0;
}