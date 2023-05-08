#include <iostream>
using namespace std;
class process
{
public:
    int at;
    int bt;
    int wt;
    int tat;
    int ct;
    int pid;
    int rem;
};
int main()
{
    cout << "Enter the number of processes: ";
    int n;
    cin >> n;
    process arr[n];
    cout << "Enter the arrival time for each process: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].at;
        arr[i].pid = i + 1;
    }
    cout << "Enter the burst time for each process: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].bt;
    }
    int complete = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i].rem = arr[i].bt;
    }
    int t = 0;
    while (complete < n)
    {
        int shortest = -1;
        int min = 10e7;
        for (int i = 0; i < n; i++)
        {
            if (arr[i].rem > 0 && t >= arr[i].at && min > arr[i].rem)
            {
                min = arr[i].rem;
                shortest = i;
            }
        }
        if (shortest == -1)
        {
            t++;
            continue;
        }
        arr[shortest].rem--;
        if (arr[shortest].rem == 0)
        {
            t++;
            complete++;
            arr[shortest].tat = t - arr[shortest].at;
            arr[shortest].ct = t;
            arr[shortest].wt = arr[shortest].tat - arr[shortest].bt;
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
         << "Waiting Time" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].pid << "\t\t" << arr[i].at << "\t\t" << arr[i].bt << "\t\t" << arr[i].tat << "\t\t" << arr[i].ct << "\t\t" << arr[i].wt << endl;
    }
    cout << "Average waiting time: " << avgwt << endl;
    cout << "Average turnaround time: " << avgtat << endl;
}