#include <iostream>
using namespace std;
int partition(int l, int h, int arr[]) { //returns the place where the array needs to partitioned off to
       int pivot = arr[l];
       int i=l;
       int j=h;
       while(i<j) {
        do{
            i++;
        }
        while(arr[i]<=pivot); //since pivot ke left side sab usse choti values and pivot ke right side mai sab usse greater values
        do {
            j--;
        }while(arr[j]>pivot);
        if(i<j) {
            swap(arr[i],arr[j]);
        } // if i & j do not cross then simply swap them
       }
       swap(arr[l],arr[j]); //if they cross then l which is essentially pivot needs to be swapped with the right side se pointer aaraha tha vo
       return j;
}
void quicksort(int l, int h, int arr[]) {
    if(l<h) { //condition
        int j = partition(l,h,arr); //parition point
        quicksort(l,j,arr); //first half
        quicksort(j+1,h,arr); //second half
    }
}

int main() {
    int arr[6] = {7,4,3,1,8,5};
    quicksort(0,5,arr); //basically (starting index,size-1,array ka name)
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }

}