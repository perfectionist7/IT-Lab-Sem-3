#include <iostream>
#include <queue>
using namespace std;
bool path_bfs(int v, int e, int reach[], int start, int a[][20])
{
    queue<int> q;
    reach[start] = 1;
    q.push(start);
    int w;
    while (!q.empty())
    {

        w = q.front();
        // cout<<w<<" -> ";
        q.pop();

        for (int u = 1; u <= v; u++)
        {
            if (u == start)
                return true;
            if (a[w][u] != 0 && !reach[u])
            {
                q.push(u);
                reach[u] = 1;
            }
        }
    }
    return false;
}
int main()
{
    int n, A[20][20], v, e;
    cout << "Enter the no of vertices";
    cin >> v;
    cout << "Enter the no of edges ";
    cin >> e;
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            A[i][j] = 0;
        }
    }

    int p, q;
    for (int i = 1; i <= e; i++)
    {
        cout << "enter source";
        cin >> p;
        cout << "enter destination";
        cin >> q;
        A[p][q] = 1;
    }
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Enter starting vertex";
    int start;
    cin >> start;
    int enda;
    cout << "enter ending vertex";
    cin >> enda;
    int visited[30] = {0};

    if (path_bfs(v, e, visited, start, A))
        cout << "CYCLE exists\n";
    else
        cout << "CYC doesn't exists\n";
    cout << "\n";
    return 0;
}
