#include <bits/stdc++.h>
using namespace std;
void sstf(int process[20], int head, int n)
{
    int dist = 0;
    int visited[20];
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    int min;
    int index;
    cout << head << " ";
    for (int i = 0; i < n; i++)
    {
        min = 1e7;
        for (int j = 0; j < n; j++)
        {
            if (abs(process[j] - head) < min && visited[j] == 0 && head != process[j])
            {
                min = abs(process[j] - head);

                index = j;
            }
        }
        dist += min;
        cout << process[index] << " ";
        visited[index] = 1;
        head = process[index];
    }
    cout << endl;
    cout << "Distance travelled" << dist << endl;
}
int main()
{
    int head;
    cout << "Enter the no. of processes" << endl;
    int n = 7;
    cout << "Enter head position" << endl;
    head = 50;
    cout << "Input the processes" << endl;
    int process[20] = {82, 170, 43, 140, 24, 16, 190};
    sstf(process, head, n);
}