#include <iostream>
using namespace std;

void dfs(int arr[][100], int n, int m, int *visited, int source)
{
    visited[source] = 1;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && arr[source][i])
        {
            dfs(arr, n, m, visited, i);
        }
    }
}
void mothervertex(int arr[][100], int n, int m, int *visited)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = 0;
        dfs(arr, n, m, visited, i);
        for (int j = 0; j < n; j++)
        {
            if (visited[j] != 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Mother Vertex is: " << i;
            k++;
        }
        for (int f = 0; f < n; f++)
        {
            visited[f] = 0;
        }
    }
    if (k == 0)
    {
        cout << "No Mother Vertex Found!" << endl;
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
    mothervertex(arr, n, m, visited);
}