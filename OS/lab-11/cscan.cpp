#include <iostream>
using namespace std;
#include <algorithm>
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
    int headindex = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (processes[i] == header)
        {
            headindex = i;
            break;
        }
    }
    for (int i = headindex; i < n + 1; i++)
    {
        cout << processes[i] << "\t";
    }
    for (int i = 0; i < headindex; i++)
    {
        cout << processes[i] << "\t";
    }
    int dist = 0;
    dist += 199 - header;
    dist += 199;
    dist += processes[headindex - 1];
    cout << "Total distance covered is " << dist << endl;
}