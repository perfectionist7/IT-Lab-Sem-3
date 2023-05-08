#include <iostream>
using namespace std;
#include <queue>
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
        arr[i].rem = arr[i].bt;
    }
    cout << "Enter the time quantum: ";
    int tq;
    cin >> tq;
    int complete = 0;
    int timer = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1].at < arr[j].at)
            {
                swap(arr[j + 1], arr[j]);
            }
        }
    }
    int pushed[n];
    for (int i = 0; i < n; i++)
    {
        pushed[i] = 0;
    }
    queue<int> ready;
    int current;
    ready.push(0);
    timer += arr[0].at;
    pushed[0] = 1;
    while (complete != n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i].rem > 0 && pushed[i] != 1 && arr[i].at <= timer)
            {
                pushed[i] = 1;
                ready.push(i);
            }
        }
        current = ready.front();
        ready.pop();
        int flag = 0;
        for (int i = 0; i < tq; i++)
        {
            arr[current].rem--;
            timer++;
            if (arr[current].rem == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            ready.push(current);
            pushed[current] = 1;
        }
        if (flag == 1)
        {
            complete++;
            pushed[current] = 1;
            arr[current].ct = timer;
            arr[current].tat = arr[current].ct - arr[current].at;
            arr[current].wt = arr[current].tat - arr[current].bt;
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