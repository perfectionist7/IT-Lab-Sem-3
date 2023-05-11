#include <iostream>
using namespace std;

int visited[100];
int arr[100][100];
int previous[100];
int n;
int shortestdist[100];

void djikstra(int arr[][100], int source, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        previous[i] = -1;
        shortestdist[i] = INT_MAX;
        visited[i] = 0;
    }
    shortestdist[0] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int min_vertex = -1;
        int min_dist = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (!visited[j] && shortestdist[j] < min_dist)
            {
                min_dist = shortestdist[j];
                min_vertex = j;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[min_vertex][j] > 0 && shortestdist[min_vertex] + arr[min_vertex][j] < shortestdist[j])
            {
                shortestdist[j] = shortestdist[min_vertex] + arr[min_vertex][j];
                previous[j] = min_vertex;
            }
        }
        visited[min_vertex] = 1;
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    cout << "Enter the edges and cost: ";
    int a, b, c;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        arr[a][b] = c;
        arr[b][a] = c;
    }
    cout << "Enter the source: ";
    int source;
    cin >> source;
    djikstra(arr, source, n, m);
    for (int i = 0; i < n; i++)
    {
        cout << "Distance of " << i << "from " << source << " " << shortestdist[i] << endl;
    }
}