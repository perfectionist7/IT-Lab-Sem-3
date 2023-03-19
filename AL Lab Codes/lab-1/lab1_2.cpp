#include <iostream>
using namespace std;
int c;
void bubbleSort(int a[], int n)
{
    int temp;
    c++;
    for (int i = 0; i < n - 1; i++)
    {
        c++;
        for (int j = 0; j < n - i - 1; j++)
        {
            c++;
            if (a[j] > a[j + 1])
            {
                c++;
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
                c += 3;
            }
        }
        c++;
    }
    c++;
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
    bubbleSort(a, n);
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n Steps: " << c;
}