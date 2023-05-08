#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    cout << "Enter the header: ";
    int header;
    cin >> header;
    cout << "Enter the number of processes: ";
    int n;
    cin >> n;
    int processes[n + 1];
    cout << "Enter the order of processes: ";
    for (int i = 0; i < n; i++)
    {
        cin >> processes[i];
    }
    cout << "The order of processing is: ";
    processes[n] = header;
    int length = n + 1;
    sort(processes, processes + length);
    int headerindex = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (processes[i] == header)
        {
            headerindex = i;
        }
    }
    for (int i = headerindex; i < n + 1; i++)
    {
        cout << processes[i] << "\t";
    }
    for (int i = 0; i < headerindex; i++)
    {
        cout << processes[i] << "\t";
    }
    int dist = 0;
    dist += processes[n] - header;
    dist += processes[n] - processes[0];
    dist += processes[headerindex - 1] - processes[0];
    cout << "Distance covered is " << dist;
}