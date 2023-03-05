#include <iostream>
#include <stack>
using namespace std;
void dfs(int arr[][10], int v, int e, int source)
{
    int distance[v];
    for (int i = 1; i <= v; i++)
        distance[i] = 0;
    int visited[v];
    for (int i = 1; i <= v; i++)
        visited[i] = 0;
    stack<int> s;
    s.push(source);
    visited[source] = 1;
    while (!s.empty())
    {
        int h = s.top();

        s.pop();
        for (int i = 1; i <= v; i++)
        {
            if (arr[h][i] == 1 && visited[i] == 0)
            {
                s.push(i);
                distance[i] = distance[h] + 1;
                visited[i] = 1;
            }
        }
        if ((distance[h]) % 2 == 0)
            cout << h << " ";
    }
}
int cnt = 0;
int main(void)
{
    int cnt = 0;
    int a[10][10], n, m, x;
    cout << "enter the no of vertices";
    cin >> n;
    cout << "enter the no of edges";
    cin >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = 0;
    int p, q;
    for (int i = 1; i <= m; i++)
    {
        cout << "enter the source";
        cin >> p;
        cout << "enter the destination";
        cin >> q;
        a[p][q] = 1;
        a[q][p] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Vertices at even distance: ";
    dfs(a, n, m, 1);
    return 0;
}