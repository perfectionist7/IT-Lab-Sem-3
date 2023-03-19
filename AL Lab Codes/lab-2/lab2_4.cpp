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
        cout << "Enter the source" << endl;
        cin >> p;
        cout << "Enter the destination" << endl;
        cin >> q;
        a[p][q] = 1;
    }
    cout << "Transpose of the given matrix: " << endl;
    Transpose(a, p);
}
