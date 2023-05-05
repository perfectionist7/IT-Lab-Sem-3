#include <iostream>
using namespace std;
int binarysearch(int low, int high, int arr[], int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
        {
            int l = mid + 1;
        }
        else
        {
            int r = mid - 1;
        }
    }
}
int main()
{
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;
    cout << "Enter the elements of the array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the target element: ";
    int x;
    cin >> x;
    cout << binarysearch(0, n - 1, arr, x);
}
