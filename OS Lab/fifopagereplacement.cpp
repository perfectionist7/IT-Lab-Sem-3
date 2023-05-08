#include <iostream>
#include <vector>
using namespace std;
bool ishit(int k, vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == k)
        {
            return true;
        }
    }
    return false;
}
void fifo(vector<int> process, int n, int m)
{
    vector<int> arr(m, -1);
    int hits = 0;
    int mat[m][n];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (ishit(process[i], arr))
        {
            hits++;
        }
        else
        {
            index = index % m;
            arr[index++] = process[i];
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
    cout << "No of hits are: " << hits;
}
int main()
{
    cout << "This is fifo algorithm: " << endl;
    cout << "Enter the size of the reference string: " << endl;
    int n;
    cin >> n;
    cout << "Enter the reference string: " << endl;
    vector<int> process;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        process.push_back(temp);
    }
    int m;
    cout << "Enter the size of the frame: " << endl;
    cin >> m;
    fifo(process, n, m);
}