#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int partition(int arr[], int l, int h)
{
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (arr[j] < arr[h])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}
void quicksort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        quicksort(arr, l, p - 1);
        quicksort(arr, p + 1, h);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0;
    int h = n - 1;

    quicksort(arr, l, h);
    cout << "Quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}