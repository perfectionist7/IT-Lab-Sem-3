// letsss goo
#include <iostream>
using namespace std;
#define infinity 9999
void prims(int arr[][100], int *visited, int n, int m)
{
    int edges;
    while (edges < n - 1)
    {
        visited[0] = 1;
        int r, c = 0;
        int min = infinity;
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == 1)
            {
                for (int j = 0; j < n; j++)
                {
                    if (min > arr[i][j])
                    {
                        if (!visited[j] && arr[i][j])
                        {
                            min = arr[i][j];
                            r = i;
                            c = j;
                        }
                    }
                }
            }
        }
        cout << r << "--->" << c << " " << arr[r][c] << endl;
        visited[c] = 1;
        edges++;
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
    cout << "Enter the edges and cost: ";
    int a, b;
    int cost;
    int arr[100][100];
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> cost;
        arr[a][b] = cost;
    }
    int visited[n] = {0};
    prims(arr, visited, n, m);
}
