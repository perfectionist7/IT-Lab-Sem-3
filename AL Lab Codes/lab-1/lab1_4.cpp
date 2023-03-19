#include <iostream>
using namespace std;
int c;
void insertionSort(int a[], int n)
{
  c++;
  int j;
  for (int i = 0; i < n - 1; i++)
  {
    c++;
    int key = a[i + 1];
    c++;
    c++;
    for (j = i; key < a[j] && j >= 0; j--)
    {
      c++;
      a[j + 1] = a[j];
      c++;
    }
    a[j + 1] = key;
    c++;
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
  insertionSort(a, n);
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << "\n Steps: " << c;
}