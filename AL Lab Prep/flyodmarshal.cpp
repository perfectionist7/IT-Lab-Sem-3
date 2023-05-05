// floyd marshal letss go
#include <iostream>
using namespace std;
#define infinite 100
int n;
void floydmarshal(int n, int arr[][10])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (j == k)
                {
                    arr[j][k] = 0;
                }
                else
                {
                    arr[j][k] = min(arr[j][k], arr[j][i] + arr[i][k]);
                }
            }
        }
    }
    cout << "Shorted pair of paths " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << "----> " << j << "is " << arr[i][j] << endl;
        }
    }
}
int main()
{
    cout << "Enter the number of vertices: " << endl;
    cout << "Enter -1 for no path (infinity)" << endl;
    cin >> n;
    int arr[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == -1)
            {
                arr[i][j] = infinite;
            }
        }
    }
    floydmarshal(n, arr);
}