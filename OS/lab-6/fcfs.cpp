#include <iostream>
using namespace std;
class process
{
public:
    int arrivaltime;
    int bursttime;
    int completiontime;
    int turnaroundtime;
    int waitingtime;
    int pid;
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
        cin >> arr[i].arrivaltime;
        arr[i].pid = i + 1;
    }
    cout << "Enter the burst time for each process: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].bursttime;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].arrivaltime > arr[j + 1].arrivaltime)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    int totaltime = 0;
    totaltime += arr[0].arrivaltime;
    for (int i = 0; i < n; i++)
    {
        totaltime += arr[i].bursttime;
        arr[i].completiontime = totaltime;
        arr[i].turnaroundtime = arr[i].completiontime - arr[i].arrivaltime;
        arr[i].waitingtime = arr[i].turnaroundtime - arr[i].bursttime;
        if (arr[i + 1].arrivaltime > totaltime)
        {
            totaltime += (arr[i + 1].arrivaltime - totaltime);
        }
    }
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
        cout << arr[i].pid << "\t\t" << arr[i].arrivaltime << "\t\t" << arr[i].bursttime << "\t\t" << arr[i].turnaroundtime << "\t\t" << arr[i].completiontime << "\t\t" << arr[i].waitingtime << endl;
    }
}