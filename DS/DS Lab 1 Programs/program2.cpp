    #include <iostream>
using namespace std;

int search(int array[], int n, int x) {


  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
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

  int result = search(array, n, x);

  if(result == -1) {
      cout << "Element not found";
      }
  else {
        cout << "Element found at index: " << result;
  }
}
