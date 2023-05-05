#include <iostream>
#include <queue>
using namespace std;
int arr[100][100];
int indegree[100];
int n;
int order[100];

int topologicalsort(int arr[][100], int n, int m)
{
    queue<int> q;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i])
            {
                indegree[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    while (q.empty() != true)
    {
        int h = q.front();
        q.pop();
        order[index++] = h;
        for (int j = 0; j < n; j++)
        {
            if (arr[h][j] != 0)
            {
                indegree[j]--;
                if (indegree[j] == 0)
                {
                    q.push(j);
                }
            }
        }
        cout << endl;
    }
    if (n == index)
    {
        return 1;
    }
    else
    {
        return 0;
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
    cout << "Enter the edges: ";
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        arr[a][b] = 1;
    }
    int result = topologicalsort(arr, n, m);
    if (result == 0)
    {
        cout << "No Topological Sort Exists because of a cycle exisiting" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << order[i] << " ";
        }
    }
}