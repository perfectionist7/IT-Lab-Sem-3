#include <iostream>
using namespace std;
int binSearRecFun(int[], int, int, int);
int c;
int main()
{
  int i, arr[100], n, num, pos;
  
  cout<<"enter size of array";
  cin>>n;
  cout << "Enter elements (in ascending order): ";
  for (i = 0; i < n; i++)
    cin >> arr[i];
  cout << "\nEnter element to be search: ";
  cin >> num;
  pos = binSearRecFun(arr, 0, n - 1, num);
  if (pos == 0)
    cout << endl
         << num << " is not available in the list";
  else
    cout << endl
         << num << " is available at Position " << pos;
  cout << endl;
   cout << "\n Steps: " << c;
  return 0;
 
}
int binSearRecFun(int arr[], int first, int last, int num)
{
  int middle;
  c++;
  if (first > last)
  {
    return 0;
    c++;
  }
  middle = (first + last) / 2;
  c++;
  if (arr[middle] == num)
  {
    c++;
    c++;
    return (middle + 1);
  }
  else if (arr[middle] > num)
  {
    c++;
    binSearRecFun(arr, first, middle - 1, num);
  }
  else if (arr[middle] < num)
  {
    c++;
    binSearRecFun(arr, middle + 1, last, num);
  }
  return middle;
}
