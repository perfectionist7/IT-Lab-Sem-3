#include <bits/stdc++.h>
using namespace std;

class process
{
public:
    int pid;
    int arriv;
    int comple;
    int burst;
    int wat;
    int tat;
    int rem;
    int pri;
};
void roundrobin(process p[20], int n, int quanta)
{
    queue<int> ready;
    int completed = 0;
    int pushed[20];
    for (int i = 0; i < n; i++)
    {
        pushed[i] = 0;
    }
    int timer = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j].arriv > p[j + 1].arriv)
            {
                swap(p[j], p[j + 1]);
            }
        }
    }
    timer += p[0].arriv;
    int curr;
    ready.push(0);
    pushed[0] = 1;
    while (!ready.empty())
    {

        curr = ready.front();
        ready.pop();
        int finflag = 0;
        for (int i = 0; i < quanta; i++)
        {
            timer++;
            p[curr].rem--;
            cout << p[curr].pid << " | ";
            if (p[curr].rem == 0)
            {
                finflag = 1;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (p[i].arriv <= timer && p[i].rem > 0 && pushed[i] == 0)
            {
                ready.push(i);
                pushed[i] = 1;
            }
        }
        if (finflag == 1)
        {
            pushed[curr] = 0;
            p[curr].comple = timer;
            p[curr].tat = p[curr].comple - p[curr].arriv;
            p[curr].wat = p[curr].tat - p[curr].burst;
            completed++;
        }
        else
        {
            ready.push(curr);
            pushed[curr] = 1;
        }
    }
    cout << endl;
    cout << "PID"
         << "\t"
         << "Arrival      "
         << "\t"
         << "Burst"
         << "\t"
         << "Priority"
         << "\t"
         << "Completion"
         << "\t"
         << "Turnaround"
         << "\t"
         << "Waiting"
         << "\t" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p[i].pid << "\t" << p[i].arriv << "\t\t" << p[i].burst << "\t\t" << p[i].pri << "\t\t" << p[i].comple << "\t\t" << p[i].tat << "\t\t" << p[i].wat << endl;
    }
}

int main()
{
    cout << "Enter the no. of processes" << endl;
    process p[20];
    int n;
    cin >> n;
    cout << "Enter the arrival times for each" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].arriv;
        p[i].pid = i + 1;
    }
    cout << "Enter the burst times for each" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].burst;
        p[i].rem = p[i].burst;
    }
    cout << "Enter time quanta" << endl;
    int q;
    cin >> q;
    roundrobin(p, n, q);
}