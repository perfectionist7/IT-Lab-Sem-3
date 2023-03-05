#include <iostream>
using namespace std;
void Transpose(int a[100][100], int v)
{
    int b[100][100];
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            b[i][j] = a[j][i];
        }
    }

    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
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

    cout << "Adjaceny Matrix before transpose: " << endl;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int visited[100] = {0};
    cout << "Adjacency Matrix after transpose: " << endl;
    Transpose(arr, n);
}
