#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,m;
    cout << "Enter the no of columns and rows: ";
    cin >> n >> m;
    int arr[n][m];
    int arr2[n][m];
    int arr3[n][m];
    cout << "Enter the elements of Matrix A: " << endl;
    for(int i=0; i<n;i++) {
        for(int j=0; j<m;j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the elements of Matrix B: " << endl;
    for(int i=0; i<n;i++) {
        for(int j=0; j<m;j++) {
            cin >> arr2[i][j];
        }
    }
    for(int i=0; i<n;i++) {
        for(int j=0; j<m;j++) {
            arr3[i][j] = max(arr[i][j],arr2[i][j]);
        }
    }
    cout << "The max array C is: " << endl;
     for(int i=0; i<n;i++) {
        for(int j=0; j<m;j++) {
            cout << arr3[i][j];
            cout << " ";
        }
        cout << endl;
    }

}