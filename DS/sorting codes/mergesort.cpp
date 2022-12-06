#include <iostream>
using namespace std;
void merge(int *arr, int l, int h) {
    int mid = (l+h)/2;
    int length1 = mid-l+1; //finding the length of the first half
    int length2 = h-mid; //finding the length of the second half
    int k=l;
    int* first = new int[length1]; //making the first half array
    int* second = new int[length2]; //making the second half array
    for(int i=0; i<length1; i++) {
        first[i] = arr[k++];
    } //copying the values of the first half to the first half array
    k = mid+1;
    for(int i=0; i<length2; i++) {
        second[i] = arr[k++];
    }//copying the values of the second half to the second half array
    int index1 = 0;
    int index2 = 0;
    k=l;
    while(index1 <length1 && index2 < length2) { //merging the 2 arrays such that smallest value takes the first index
        if(first[index1] < second[index2]) { 
            arr[k++] = first[index1++];
        }
        else {
            arr[k++] = second[index2++];
        }
    }
    while(index1 < length1) { //if length1 > length2
        arr[k++] = first[index1++];
    }
    while(index2 < length2) { //if length2 > length2
        arr[k++] = second[index2++];
    }

}
void mergesort(int* arr, int l, int h) {
    if(l>=h) {
        return;
    }
    int mid = (l+h)/2; //finding the mid
    mergesort(arr,l,mid); //first half
    mergesort(arr,mid+1,h); //second half
    merge(arr,l,h); //merging both the halves

}
int main() {
    int arr[6] = {4,7,8,1,2,5};
    mergesort(arr,0,5);
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }

}

