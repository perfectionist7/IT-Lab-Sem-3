// lets go minmax
#include <iostream>
using namespace std;
class mmax
{
public:
    int min;
    int max;
};
mmax object;

mmax minmax(int arr[], int low, int high)
{
    if (low == high)
    {
        object.min = arr[0];
        object.max = arr[0];
        return object;
    }
    if (low + 1 == high)
    {
        if (arr[low] > arr[high])
        {
            object.min = arr[high];
            object.max = arr[low];
        }
        else
        {
            object.min = arr[low];
            object.max = arr[high];
        }
        return object;
    }
    else
    {
        int mid = (low + high) / 2;
        mmax p1, p2;
        p1 = minmax(arr, low, mid);
        p2 = minmax(arr, mid + 1, high);
        if (p1.max > p2.max)
        {
            object.max = p1.max;
        }
        else
        {
            object.max = p2.max;
        }
        if (p1.min > p2.min)
        {
            object.min = p2.min;
        }
        else
        {
            object.min = p1.min;
        }
        return object;
    }
}
int main()
{
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mmax p;
    int low = 0;
    int high = n - 1;
    p = minmax(arr, low, high);
    cout << "The minimum element is: " << p.min;
    cout << "The maximum element is: " << p.max;
}