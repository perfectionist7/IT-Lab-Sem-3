#include <iostream>
using namespace std;
class process
{
public:
    int at;
    int bt;
    int tat;
    int wt;
    int ct;
    int priority;
    int pid;
};
int main()
{
    cout << "Enter the number of processes: ";
    int n;
    cin >> n;
    cout << "Enter the burst time for all the processes: ";
    process arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].bt;
        arr[i].pid = i + 1;
    }
    cout << "Enter the arrival time for all the processes: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].at;
    }
    cout << "Enter the priority of all the processes: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].priority;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].at > arr[j + 1].at)
            {
                swap(arr[j], arr[j + 1]);
            }
            else if (arr[j].at == arr[j + 1].at)
            {
                if (arr[j + 1].priority > arr[j].priority)
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
    int t = 0;
    t += arr[0].at;
    for (int i = 0; i < n; i++)
    {
        t += arr[i].bt;
        arr[i].ct = t;
        arr[i].tat = arr[i].ct - arr[i].at;
        arr[i].wt = arr[i].tat - arr[i].bt;
        if (arr[i + 1].at > t)
        {
            t += (arr[i + 1].at - t);
        }
    }
    int avgwt = 0;
    int avgtat = 0;
    for (int i = 0; i < n; i++)
    {
        avgwt += arr[i].wt;
        avgtat += arr[i].tat;
    }
    avgwt = avgwt / n;
    avgtat = avgtat / n;
    cout << "Process ID"
         << "\t"
         << "Arrival Time"
         << "\t"
         << "Burst Time"
         << "\t"
         << "Turnaround Time"
         << "\t"
         << "Completion Time"
         << "\t"
         << "Waiting Time"
         << "\t"
         << "Priority"
         << "\t" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].pid << "\t\t" << arr[i].at << "\t\t" << arr[i].bt << "\t\t" << arr[i].tat << "\t\t" << arr[i].ct << "\t\t" << arr[i].wt << "\t\t" << arr[i].priority << "\t\t" << endl;
    }
    cout << "Average waiting time: " << avgwt << endl;
    cout << "Average turnaround time: " << avgtat << endl;
}