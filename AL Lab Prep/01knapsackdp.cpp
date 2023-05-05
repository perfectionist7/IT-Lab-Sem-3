// 01 knapsack using dynamic programming letss go
#include <iostream>
using namespace std;
int knapsack(int n, int profit[], int weight[], int c)
{
    int matrix[n][c + 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            for (int j = 0; j <= c; j++)
            {
                if (j >= weight[i])
                {
                    matrix[i][j] = profit[i];
                }
                else
                {
                    matrix[i][j] = 0;
                }
            }
        }
        else
        {
            for (int j = 0; j <= c; j++)
            {
                if (j < weight[i])
                {
                    matrix[i][j] = matrix[i + 1][j];
                }
                else
                {
                    matrix[i][j] = max(matrix[i + 1][j], matrix[i + 1][j - weight[i]] + profit[i]);
                }
            }
        }
    }
    int k = 0, l = c;
    cout << endl;
    while (k < n && l >= 0)
    {
        if (matrix[k][l] != matrix[k + 1][l] && l - weight[k] >= 0)
        {
            cout << k << "Selected" << endl;
            l = l - weight[k];
        }
        k++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return matrix[0][c];
}
int main()
{
    int c;
    int n;
    cout << "Enter the number of eleemnts: ";
    cin >> n;
    int profit[n];
    int weight[n];
    cout << "Enter the profit and weight for each item: ";
    for (int i = 0; i < n; i++)
    {
        cin >> profit[i];
        cin >> weight[i];
    }
    cout << "Enter the capacity: ";
    cin >> c;
    cout << knapsack(n, profit, weight, c);
}