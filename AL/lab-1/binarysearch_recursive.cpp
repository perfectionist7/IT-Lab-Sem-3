#include <iostream>
using namespace std;
int binarysearch(int arr[], int low, int high, int x)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            return binarysearch(arr, low, mid - 1, x);
        }
        else
        {
            return binarysearch(arr, mid + 1, high, x);
        }
    }
    return -1;
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
    cout << "Enter target element: ";
    int x;
    cin >> x;
    int low = 0;
    int high = n - 1;
    int ans = binarysearch(arr, low, high, x);
    if (ans != -1)
    {
        cout << "Element found at " << ans << endl;
    }
    else
    {
        cout << "Element not found! " << endl;
    }
}
