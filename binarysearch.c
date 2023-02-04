#include <iostream>
using namespace std;
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
    cout << "Element found at index: " << binarysearch(l,r,x,arr)

}
int binarysearch(int l, int r, int x, int arr[]) {
    if(r>=l) {
        int mid = (l + (r-l))/2;
        if(arr[mid]==x) {
            return mid;
        }
        if(arr[mid] > x) {
            return binarysearch(mid+1,r,x,arr);
        }
        else {
            return binarysearch(l,mid-1,x,arr);
        }
    }
    return -1;
}
