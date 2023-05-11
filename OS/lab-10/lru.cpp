#include <iostream>
#include <vector>
using namespace std;
bool ishit(int ele, int m, vector<int> arr)
{
    for (int i = 0; i < m; i++)
    {
        if (arr[i] == ele)
        {
            return true;
        }
    }
    return false;
}
int check(int processes[], vector<int> arr, int n, int m, int curr)
{
    int index = 0;
    int var[m];
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        int flag = 0;
        for (int j = curr; j >= 0; j--)
        {
            count++;
            if (processes[j] == arr[i])
            {
                flag = 1;
                var[index++] = count;
                break;
            }
        }
        if (flag == 0)
        {
            var[index++] = 9999;
        }
    }
    int min = 0;
    int minindex = 0;
    for (int i = 0; i < index; i++)
    {
        if (var[i] > min)
        {
            min = var[i];
            minindex = i;
        }
    }
    return minindex;
}
void lru(int processes[], int n, int m, vector<int> arr)
{
    int hits = 0;
    int mat[m][n];
    for (int i = 0; i < n; i++)
    {
        if (i < m)
        {
            arr[i] = processes[i];
        }
        else if (ishit(processes[i], m, arr))
        {
            hits++;
        }
        else
        {
            int f = check(processes, arr, n, m, i);
            arr[f] = processes[i];
        }
        for (int k = 0; k < m; k++)
        {
            mat[k][i] = arr[k];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Hits: " << hits;
}
int main()
{
    cout << "Enter the number of elements in the reference string: ";
    int n;
    cin >> n;
    int processes[n];
    cout << "Enter the reference string: ";
    for (int i = 0; i < n; i++)
    {
        cin >> processes[i];
    }
    cout << "Enter the size of the frame: ";
    int m;
    cin >> m;
    vector<int> arr(m, -1);
    lru(processes, n, m, arr);
}
