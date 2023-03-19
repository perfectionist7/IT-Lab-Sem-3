#include <iostream>
using namespace std;

void dfs(int i, int arr[][100], int visited[], int n)
{
    int j;
    cout << i << " ";
    visited[i] = 1;
    for (j = 1; j < n + 1; j++)
    {
        if (!visited[j] && arr[i][j] == 1)
            dfs(j, arr, visited, n);
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

    cout << "Enter the edges in the graph (from 1): " << endl;
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
    dfs(k, arr, visited, n);
}