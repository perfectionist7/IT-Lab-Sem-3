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
    int processes[n];
    cout << "Enter the order of processes: ";
    for (int i = 0; i < n; i++)
    {
        cin >> processes[i];
    }
    cout << "The order of processing is: ";
    cout << header << "\t";
    for (int i = 0; i < n; i++)
    {
        cout << processes[i] << "\t";
    }
    cout << endl;
    int dist = 0;
    dist += abs(header - processes[0]);
    for (int i = 1; i < n; i++)
    {
        dist += abs(processes[i] - processes[i - 1]);
    }
    cout << "Total distance covered is: " << dist << endl;
}