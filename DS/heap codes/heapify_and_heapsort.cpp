#include <iostream>
using namespace std;
//implementing the heapify function
void heapifyfunc(int arr[], int n, int i) { //n is obviously the size of the heap, arr is the array to be heapified and i is the index of the array to be sorted into the heap
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(right <= n && arr[right] > arr[largest]) { //change it to arr[right] < arr[largest] for min heap
        largest = right;
    
    }
    if(left <= n && arr[left] > arr[largest]) { //change it to arr[left] < arr[largest] for min heap
        largest = left;
    }
    if(i!=largest) {
        swap(arr[largest],arr[i]);
        heapifyfunc(arr,n,largest);
    }
} 

//implementing heapsort
void heapsort(int arr[], int n) {
    int size = n;
    while(size > 1) {
        swap(arr[size],arr[1]);
        size--;
        heapifyfunc(arr,size,1);
    }
}
int main() {
    int arr[7] = {-1,5,7,11,4,3,8};
    int n = 6;
    for(int i=n/2; i>0; i--) {
        heapifyfunc(arr,n,i);
    }
    cout << "This is the fucking heapified array: ";
    for(int i=1; i<=n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Here is the heapsorted array for fuck's sake: ";
    heapsort(arr,n);
    for(int i=1; i<=n; i++) {
        cout << arr[i] << " ";
    }   
    


}
