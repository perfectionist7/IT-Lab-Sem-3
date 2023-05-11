#include <iostream>
using namespace std;
void dfs(int arr[][100], int *visited, int m, int n, int source, int destination, int *path, int k)
{
    visited[source] = 1;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && arr[source][i] == 1)
        {
            path[k++] = i;
            cout << path[k] << " ";
            if (destination == i)
            {
                cout << "Path is : " << endl;
                for (int f = 0; f < k; f++)
                {
                    cout << path[f] << " ";
                }
            }
            dfs(arr, visited, m, n, i, destination, path, k);
        }
    }
}
int main()
{
    cout << "Enter the number of nodes: ";
    int n;
    cin >> n;
    cout << "Enter the number of edges: ";
    int m;
    cin >> m;
    cout << "Enter the edges: ";
    int a, b;
    int arr[100][100];
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        arr[a][b] = 1;
    }
    int visited[n] = {0};
    int source, destination;
    cout << "Enter source vertex: ";
    cin >> source;
    cout << "Enter destination vertex: ";
    cin >> destination;
    int path[10];
    int k = 0;
    path[k] = source;
    dfs(arr, visited, m, n, source, destination, path, k);
}