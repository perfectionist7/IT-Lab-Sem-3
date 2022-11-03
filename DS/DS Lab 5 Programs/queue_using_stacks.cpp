#include <iostream>
using namespace std;
#define stacksize 30
class stack {
public:
    int top;
    int arr[stacksize];
    stack() {
        top=-1;
    }
    void push(int x) {
        if(top==stacksize-1) {
            cout << "Stack Overflow! ";
        }
        else {
            arr[++top] = x;
        }
    }
    int pop() {
        if(top==-1) {
            cout << "Stack Empty! ";
        }
        else {
            return arr[top--];
        }
    }
};
class queue_using_stack {
public:
    stack s1, s2;
    int count=0;
    void enqueue(int x) {
        s1.push(x);
        count++;
    }
    void dequeue() {
        if(s1.top==-1 && s2.top==-1) {
            cout << "Queue is Empty!";
        }
        else {
            for(int i=0; i<count; i++) {
                int x = s1.pop();
                s2.push(x);
            }
            cout << "Element dequeued: " << s2.pop() << endl;
            count--;
            for(int i=0; i<count; i++) {
                int y = s2.pop();
                s1.push(y);
            }

        }
    }
    void display() {
        cout << "UPDATED QUEUE: " << endl;
        for(int i=0; i<=s1.top; i++) {
            cout << s1.arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    queue_using_stack q;
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(8);
    q.display();
    q.dequeue();
    q.display();
}