#include <iostream>
#include <queue>
#include <vector>
using namespace std;
bool bfs(int arr[][10], int n, int e, int source, int d)
{
    vector<int> ans;
    int h;
    int c = 0;
    int visited[n + 1];
    for (int i = 1; i <= n; i++)
    {
        visited[i] = 0;
    }
    queue<int> q;
    q.push(source);
    visited[source] = 1;
    c++;
    while (!q.empty())
    {
        h = q.front();
        q.pop();
        for (int i = 1; i <= n; i++)
        {
            if (arr[h][i] == 1 && visited[i] == 0)
            {
                c++;
                q.push(i);
                visited[i] = 1;
            }
        }
    }

    if (h == d)
    {
        return true;
    }
    return false;
}
int main(void)
{
    int a[10][10];
    int vertex;
    int edge;
    cout << "Enter the No of vertex: ";
    cin >> vertex;
    cout << "Enter the No of edge: ";
    cin >> edge;
    for (int i = 1; i <= vertex; i++)
        for (int j = 1; j <= vertex; j++)
            a[i][j] = 0;
    int source, destination;
    for (int i = 1; i <= edge; i++)
    {
        cout << "Enter the source: ";
        cin >> source;
        cout << "Enter the destination: ";
        cin >> destination;
        a[source][destination] = 1;
        a[destination][source] = 1;
    }
    int s, d;
    cout << "enter the source to get the path: ";
    cin >> s;
    cout << "enter the source: ";
    cin >> d;
    if (bfs(a, vertex, edge, s, d))
        cout << "the path exist" << endl;
    else
        cout << "the path doesn't exist" << endl;
}