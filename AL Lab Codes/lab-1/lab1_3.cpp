#include <iostream>
using namespace std;
int c;
void selectionSort(int a[], int n)
{
    int temp;
    int min;
    c += 2;
    for (int i = 0; i < n - 1; i++)
    {
        c++;
        min = i;
        c++;
        for (int j = i + 1; j < n; j++)
        {
            c++;
            if (a[j] < a[min])
            {
                c++;
                min = j;
                c++;
            }
        }
        c++;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        c += 3;
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The sorted array is: ";
    selectionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n Steps: " << c;
}