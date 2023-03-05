#include <iostream>
#include <queue>
using namespace std;
void bfs(int arr[][100], int v, int e, int source)
{
    int visited[100];
    for (int i = 1; i <= v; i++)
        visited[i] = 0;
    queue<int> q;
    q.push(source);
    visited[source] = 1;
    while (!(q.empty()))
    {
        int h = q.front();
        q.pop();
        for (int i = 1; i <= v; i++)
        {
            if (arr[h][i] == 1 && visited[i] == 0)
            {
                q.push(i);
                visited[i] = 1;
            }
        }
        cout << h << " ";
    }
}
int main()
{
    int n;
    cout << "No. of vertices: ";
    cin >> n;

    int m;
    cout << "No. of edges: ";
    cin >> m;

    int arr[100][100] = {0};

    cout << "Enter the edges in the graph: " << endl;
    int p, q;
    for (int i = 0; i < m; i++)
    {
        cin >> p >> q;
        arr[p][q] = 1;
        arr[q][p] = 1;
    }

    cout << "Adjaceny Matrix: " << endl;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int visited[100] = {0};

    cout << "Enter Source vertex: ";
    int k;
    cin >> k;
    bfs(arr, n, m, k);
}