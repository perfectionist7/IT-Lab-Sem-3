#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number of elements in the r-matrix";
    int n;
    cin >> n;
    int r[n];
    cout << "Enter the elements of the r-matrix: ";
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }
    int arr[n - 1][n - 1] = {0};
    int kay[n - 1][n - 1] = {0};
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (i == j)
            {
                arr[i][j] = 0;
                kay[i][j] = 0;
            }
            if (j == i + 1)
            {
                arr[i][j] = r[i] * r[i + 1] * r[i + 2];
                kay[i][j] = i + 1;
            }
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (j > i && j != i + 1)
                {
                    int min = INT_MAX;
                    for (int k = i; k < j; k++)
                    {
                        int temp = arr[i][k] + arr[k + 1][j] + r[i] * r[k + 1] * r[j + 1];
                        cout << temp << endl;
                        if (temp < min)
                        {
                            min = temp;
                            arr[i][j] = min;
                            kay[i][j] = k + 1;
                        }
                    }
                }
            }
        }
    }
    cout << "Here is the matrix: " << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Here is the kay matrix: " << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cout << kay[i][j] << " ";
        }
        cout << endl;
    }
    cout << "No of computations are: " << arr[0][n - 2];
}