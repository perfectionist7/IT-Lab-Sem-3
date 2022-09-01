#include <iostream> <cstudio>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;


    if (array[mid] == x)
      return mid;


    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

int main() {
  int m,x;
  cout << "Enter the size of the array ";
  cin >> m;
  int array[m];
  cout << "Enter the elements of the array ";
  for(int i=0; i<m;i++) {
    cin >> array[i];
  }
  cout << "Enter the target element ";
  cin >> x;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1) {
    cout << "Not found";
  }
  else {
    cout << "Element is found at index " << result;
  }
}

