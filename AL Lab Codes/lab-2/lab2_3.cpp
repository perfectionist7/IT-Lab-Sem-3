#include <iostream>
#include <stack>
using namespace std;
void Mother(int a[100][100], int n, int s)
{
    stack<int> S;
    int visited[100];
    for (int i = 1; i <= n; i++)
    {
        visited[i] = 0;
    }
    S.push(s);
    visited[s] = 1;
    while (!S.empty())
    {
        int u = S.top();
        S.pop();
        for (int i = 1; i <= n; i++)
        {
            if (a[u][i] == 1 && visited[i] == 0)
            {
                S.push(i);
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
    cout << "Mother vertex --> " << s;
    cout << endl;
}
int main()
{
    int v, e;
    cout << "Enter the number of vertices" << endl;
    cin >> v;
    cout << "Enter the number of edges" << endl;
    cin >> e;
    int a[100][100];
    int p, q;
    cout << "Enter the verticies from 1 " << endl;
    for (int i = 1; i <= e; i++)
    {
        cout << "Enter the source " << endl;
        cin >> p;
        cout << "Enter the destination " << endl;
        cin >> q;
        a[p][q] = 1;
    }
    for (int i = 1; i <= v; i++)
    {
        Mother(a, v, i);
    }
}
