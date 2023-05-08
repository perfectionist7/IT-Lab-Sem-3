#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
// optimal page replacement
bool ishit(vector<int> arr, int ele, int m)
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
int check(vector<int> arr, int process[], int m, int n, int curr)
{
    int temp[m];
    int index = 0;
    cout << "current " << curr << endl;
    for (int i = 0; i < m; i++)
    {
        temp[i] = -1;
    }

    for (int j = 0; j < m; j++)
    {
        int count = 0;
        bool flag = 0;
        for (int i = curr; i < n; i++)
        {
            count++;
            cout << count << " ";
            if (arr[j] == process[i])
            {
                temp[index] = count;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            temp[index] = 9999;
        }
        index++;
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
    int min = 0;
    int minindex = 0;
    for (int i = 0; i < m; i++)
    {
        if (temp[i] > min)
        {
            min = temp[i];
            minindex = i;
        }
    }
    cout << "MIN INDEX :" << minindex << endl;
    cout << "FRAME: " << arr[minindex] << endl;
    return minindex;
}
int main()
{
    cout << "Enter the elements in the reference string: ";
    int n;
    cin >> n;
    int process[n];
    cout << "Enter the reference string: ";
    for (int i = 0; i < n; i++)
    {
        cin >> process[i];
    }
    cout << "Enter the size of the frame: ";
    int m;
    cin >> m;
    vector<int> arr(m, -1);
    int mat[m][n];
    int hits = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < m)
        {
            arr[i] = process[i];
        }
        else if (ishit(arr, process[i], m))
        {
            hits++;
        }
        else
        {
            int f = check(arr, process, m, n, i);
            arr[f] = process[i];
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