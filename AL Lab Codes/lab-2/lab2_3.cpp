#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void mother(int a[100][100], int n, int s)
{
    stack<int> stck;
    int visited[n + 1];
    for (int i = 1; i <= n; i++)
    {
        visited[i] = 0;
    }
    stck.push(s);
    visited[s] = 1;
    while (!stck.empty())
    {
        int u = stck.top();
        stck.pop();
        for (int i = 1; i <= n; i++)
        {
            if (a[u][i] == 1 && visited[i] != 1)
            {
                stck.push(i);
                visited[i] = 1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            return;
        }
    }
    cout << "Mother vertex:" << s;
}

int main()
{
    int v, e, a[100][100];
    cout << "Enter no. of vertices" << endl;
    cin >> v;
    cout << "Enter no. of edges" << endl;
    cin >> e;
    int p, q;
    for (int i = 1; i <= e; i++)
    {
        cout << "Enter the source" << endl;
        cin >> p;
        cout << "Enter the destination" << endl;
        cin >> q;
        a[p][q] = 1;
    }
    for (int i = 1; i <= v; i++)
    {
        mother(a, v, i);
        cout << endl;
    }
}
