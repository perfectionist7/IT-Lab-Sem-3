#include <iostream>
using namespace std;
int binarysearch(int l, int r, int x, int arr[]) {
    int c;
    c++;
    if(r>=l) {
        int mid = (l + (r-l))/2;
        c++;
        c++;
        if(arr[mid]==x) {
            return mid;
            c++;
        }
        c++;
        if(arr[mid] > x) {
            return binarysearch(mid+1,r,x,arr);
            c++;
        }
        else {
            return binarysearch(l,mid-1,x,arr);
            c++;
        }
    }
    c++;
    cout << c << endl;
    return -1;

}
int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target element: " << endl;
    int x;
    cin >> x;
    int r,l;
    l=0;
    r=n-1;
    cout << "Element found at index: " << endl;
    cout << binarysearch(l,r,x,arr);

}

