#include <iostream>
using namespace std;
//max heap mai the parent node must be greater than the children node
//time complexity is O(logn)
class heap {
    public:
    int arr[100]; //array mai we represent the heap
    int size; //size of the heap incremented every time we insert an element into the heap
    heap() { //heap ka constructor not necessary
        arr[0] = -1; //we take the 0th index as -1 and we start inserting elements in the heap from the first index
        size = 0;   
    }
    void insert(int val) { //val is basically the value to be inserted into the heap
        size++; //incrementing the size on each insertion step
        int index = size;
        arr[index] = val; //adding the value to inserted at the end of the array
        while(index > 1) { //since index[0] was -1
            int parent = index/2; //parent of a node is always at i/2th index
            if(arr[parent] <  arr[index]) {  //idhar make it > for min heap
                swap(arr[parent],arr[index]);
                index = parent; //dont forget to update index after every if be it deletion or insertion
            } //swapping the value of parent and index if parent ka value is less than the insetion ka value since the heap is supposed to be a max heap
            else {
                return;
            }
        } 
    } 
    void display() {
        for(int i=1; i<=size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deletefronheap() {
        arr[1] = arr[size]; //first node = last node
        size--; //removing the last node
        int i=1;
        while(i<size) {
            int leftindex = 2*i;
            int rightindex = 2*i + 1;
            if(leftindex < size  && arr[leftindex] > arr[i]) { //agar leftindex is greater than the root then swap since max heap &  checking boundary for both the indexes
                swap(arr[i],arr[leftindex]);
                i = leftindex;
            }
            else if(rightindex < size && arr[rightindex] > arr[i]) { //agar rightindex is greater than root then swap since max heap
                swap(arr[i],arr[rightindex]);
                i = rightindex;
            }
            else {
                return;
            }

        }

    }
};
int main() {
    heap h;
    h.insert(53);
    h.insert(50);
    h.insert(52);
    h.insert(44);
    h.insert(60);
    h.display();
    h.deletefronheap();
    h.display();


}
