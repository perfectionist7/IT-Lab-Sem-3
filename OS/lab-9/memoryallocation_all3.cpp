#include <iostream>
using namespace std;
#include <vector>
// letssssssssss go
void bestfit(vector<int> process, vector<int> blocks)
{
    vector<int> allocation(process.size(), -1);
    vector<bool> done(process.size(), 0);
    for (int i = 0; i < process.size(); i++)
    {
        int in = -1;
        for (int j = 0; j < blocks.size(); j++)
        {
            if (process[i] < blocks[j] && !done[j])
            {
                if (in == -1)
                {
                    in = j;
                }
                else
                {
                    if (blocks[j] < blocks[in])
                    {
                        in = j;
                    }
                }
            }
        }
        cout << i + 1 << "\t" << process[i] << "\t";
        if (in != -1)
        {
            allocation[i] = in;
            cout << allocation[i] + 1 << endl;
            done[i] = 1;
        }
        else
        {
            cout << "Not allocated" << endl;
        }
    }
}
void worstfit(vector<int> process, vector<int> blocks)
{
    vector<int> allocation(process.size(), -1);
    for (int i = 0; i < process.size(); i++)
    {
        int in = -1;
        for (int j = 0; j < blocks.size(); j++)
        {
            if (blocks[j] > process[i])
            {
                if (in == -1)
                {
                    in = j;
                }
                else
                {
                    if (blocks[j] > blocks[in])
                    {
                        in = j;
                    }
                }
            }
        }
        if (in != -1)
        {
            blocks[in] = blocks[in] - process[i];
            allocation[i] = in;
        }
    }
    for (int i = 0; i < process.size(); i++)
    {
        cout << i + 1 << "\t" << process[i] << "\t";
        if (allocation[i] != -1)
        {
            cout << allocation[i] + 1 << endl;
        }
        else
        {
            cout << "Not allocated" << endl;
        }
    }
}
void firstfit(vector<int> process, vector<int> blocks)
{
    vector<int> allocation(process.size(), -1);
    for (int i = 0; i < process.size(); i++)
    {
        for (int j = 0; j < blocks.size(); j++)
        {
            if (blocks[j] > process[i])
            {
                allocation[i] = j;
                blocks[j] = blocks[j] - process[i];
                break;
            }
        }
        cout << i + 1 << "\t" << process[i] << "\t";
        if (allocation[i] != -1)
        {
            cout << allocation[i] + 1 << endl;
        }
        else
        {
            cout << "Not allocated" << endl;
        }
    }
}
int main()
{
    cout << "Enter the number of processes: ";
    int n;
    cin >> n;
    cout << "Enter the number of blocks: ";
    int m;
    int a;
    cin >> m;
    vector<int> process;
    vector<int> blocks;
    cout << "Enter the size of the processes: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        process.push_back(a);
    }
    cout << "Enter the size of blocks: ";
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        blocks.push_back(a);
    }
    firstfit(process, blocks);
}