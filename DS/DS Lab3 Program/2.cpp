#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
#define stacksize 50
class stack {
    int top;
    char arr[stacksize];
public:
    stack() {
        top= -1;
    }
    void push(int n) {
    if(top!=stacksize-1) {
        arr[++top] = n;
    }
    else {
        cout << "Stack Overflow";
    }
    }
    int pop() {
        if(top!=-1) {
            return arr[top--];
        }
        cout << "No element to pop" << endl;
        return -1;
    }
    void display() {
        for(int i=top;i>=0;i--) {
            cout << arr[i] << endl;
        }
    }
};
int main() {
	stack s1;
	int n;
	int base;
	int arr[10];
	int i=0;
	int k=0;
	int m=0;
	int sum = 0;
	cout << "Enter the decimal number: " << endl;
	cin >> n;
	cout << "Enter the base: " << endl;
	cin >> base;
	while(n>0) {
        k = n%base;
		n = n/base;
		s1.push(k);
		m++;
	}
	cout << "Decimal to Base: ";
	for(int i=0; i<m; i++) {
        cout << s1.pop();
	}


}

