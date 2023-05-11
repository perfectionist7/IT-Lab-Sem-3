#include <iostream>
using namespace std;
#include <queue>
void bfs(int arr[][100], int n, int m, int source, int visited[])
{
    queue<int> q;
    q.push(source);
    visited[source] = 1;
    while (!q.empty())
    {
        int h = q.front();
        q.pop();
        for (int i = 0; i < n; i++)
        {
            if (arr[h][i] == 1 && !visited[i])
            {
                visited[i] = 1;
                q.push(i);
            }
        }
        cout << h << " ";
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
    cout << "Enter the edges: ";
    int a, b;
    int arr[100][100];
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        arr[a][b] = 1;
    }
    int visited[100] = {0};
    cout << "Enter the source vertex: ";
    int source;
    cin >> source;
    bfs(arr, n, m, source, visited);
}