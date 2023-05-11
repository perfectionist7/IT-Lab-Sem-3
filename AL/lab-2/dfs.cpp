#include <iostream>

using namespace std;
void dfs(int arr[][100], int n, int m, int source, int visited[])
{
    visited[source] = 1;
    cout << source << " ";
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && arr[source][i] == 1)
        {
            dfs(arr, n, m, i, visited);
        }
    }
}

int main()
{
    cout << "Enter the number of vertices: ";
    int n;
    cin >> n;
    cout << "Enter the number of edges: ";
    int m;
    cin >> m;
    cout << "Enter the edges of the graph from 0: " << endl;
    int a, b;
    int arr[100][100];
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    cout << "Enter the source vertex: ";
    int source;
    cin >> source;
    int visited[100] = {0};
    dfs(arr, n, m, source, visited);
}