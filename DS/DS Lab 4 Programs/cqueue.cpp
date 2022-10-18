#include <iostream>
using namespace std;
#define queuesize 5
class cqueue {
    int front, rear;
    int arr[queuesize];
public:
    cqueue() {
        front = -1;
        rear = -1;
    }
    bool isEmpty() {
        if(front == -1 && rear == -1) {
            return true;
        }
        else {
            return false;
        }
    }
    bool isFull() {
        if(front == (rear+1)%queuesize) {
            return true;
        }
        else {
            return false;
        }
    }
    void enqueue(int element) {
        if(isFull()) {
            cout << "Queue is already full";
        }
        else if(isEmpty()) {
            front++;
        }
        rear = (rear+1)%queuesize;
        arr[rear] = element;
    }
    int dequeue() {
        if(isEmpty()) {
            cout << "The queue is already empty";
        }
        int element = arr[front];
        if(front == rear) {
            front = rear = -1;
        }
        else {
            front = (front+1)%queuesize;
        }
        return element;
    }
    void display() {
        int i;
        for(i=front;i!=rear;i=(i+1)%queuesize) {
            cout << arr[i] << " ";
        }
        cout << arr[i] << endl;
    }
};
int main() {
    cqueue ayush;
    ayush.enqueue(10);
    ayush.enqueue(20);
    ayush.enqueue(10);
    cout << ayush.dequeue() << endl;
    ayush.display();
}