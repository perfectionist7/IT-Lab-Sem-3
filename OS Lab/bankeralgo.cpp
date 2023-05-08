#include <iostream>
using namespace std;
#include <vector>
// bankers letss go
int main()
{
    cout << "Enter the number of processes: ";
    int n;
    cin >> n;
    cout << "Enter the number of resources: ";
    int m;
    cin >> m;
    int allocation[n][m];
    int maxneed[n][m];
    int available[m];
    int need[n][m];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the allocation for process " << i << endl;
        for (int j = 0; j < m; j++)
        {
            cin >> allocation[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the max need for process " << i << endl;
        for (int j = 0; j < m; j++)
        {
            cin >> maxneed[i][j];
            need[i][j] = maxneed[i][j] - allocation[i][j];
        }
    }
    cout << "Enter the available resources " << endl;
    int newavail[m];
    for (int i = 0; i < m; i++)
    {
        cin >> available[i];
        newavail[i] = available[i];
    }
    int finish[n];
    int pflag = 0;
    int ans = 0;
    vector<int> safesequence;
    for (int f = 0; f < n; f++)
    {
        for (int i = 0; i < n; i++)
        {
            int failure = 0;
            for (int j = 0; j < m; j++)
            {
                if (need[i][j] > available[j])
                {
                    failure = 1;
                }
            }
            if (failure == 0 && finish[i] != 1)
            {
                safesequence.push_back(i);
                for (int k = 0; k < m; k++)
                {
                    available[k] += allocation[i][k];
                }
                finish[i] = 1;
                pflag++;
            }
        }
        if (pflag == n)
        {
            ans = 1;
            break;
        }
    }
    if (ans == 0)
    {
        cout << "No safe sequence detected!";
    }
    else
    {
        cout << "Safe Sequence: " << endl;
        for (int i = 0; i < safesequence.size(); i++)
        {
            cout << safesequence[i] << " ";
        }
    }
    int request;
    cout << "Any additional requests? ";
    cin >> request;
    int requesting[m];
    int number;
    int flag = 0;
    if (request == 1)
    {
        cout << "Request for the process? ";
        cin >> number;
        for (int i = 0; i < m; i++)
        {
            cin >> requesting[m];
        }

        for (int i = 0; i < m; i++)
        {
            if (need[number][i] < requesting[i])
            {
                cout << "CANT FUCKING ACCEPT IDIOT!";
                flag = 1;
                break;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (newavail[i] < requesting[i])
            {
                cout << "CANT FUCKING ACCEPT IDIOT!";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            for (int i = 0; i < m; i++)
            {
                available[i] = newavail[i] - requesting[i];
            }
            for (int i = 0; i < m; i++)
            {
                need[number][i] = need[number][i] - requesting[i];
            }
            for (int i = 0; i < m; i++)
            {
                allocation[number][i] = allocation[number][i] + requesting[i];
            }
            int nfinish[n];
            int pflag = 0;
            int ans = 0;
            vector<int> safesequence;
            for (int f = 0; f < n; f++)
            {
                for (int i = 0; i < n; i++)
                {
                    int failure = 0;
                    for (int j = 0; j < m; j++)
                    {
                        if (need[i][j] > available[j])
                        {
                            failure = 1;
                        }
                    }
                    if (failure == 0 && nfinish[i] != 1)
                    {
                        safesequence.push_back(i);
                        for (int k = 0; k < m; k++)
                        {
                            available[k] += allocation[i][k];
                        }
                        nfinish[i] = 1;
                        pflag++;
                    }
                }
                if (pflag == n)
                {
                    ans = 1;
                    break;
                }
            }
            if (ans == 0)
            {
                cout << "No safe sequence detected!";
            }
            else
            {
                cout << "Safe Sequence: " << endl;
                for (int i = 0; i < safesequence.size(); i++)
                {
                    cout << safesequence[i] << " ";
                }
            }
        }
    }
}