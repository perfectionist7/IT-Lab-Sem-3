#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
#define stacksize 50
char arr[3] = {')','}',']'};
char arr2[3] = {'(','{','['};
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
    char peek(){
        if(top>=0)
            return arr[top];
        else{
            return -1;
        }
    }
    bool isEmpty() {
        if(top==-1) {
            return true;
        }
        else {
            return false;
        }
    }
};
int main() {
    stack stk;
    char ch[100];
    cout << "Enter the expression : ";
    gets(ch);
    for(int i=0; i<strlen(ch);i++) {
        for(int j=0; j<3; j++) {
            if(ch[i]==arr2[j]) {
                stk.push(arr2[j]);
            }
            else if(ch[i] == arr[j] && stk.peek()==arr2[j]) {
                stk.pop();
            }
        }
    }
    if(stk.isEmpty()) {
        cout << "The Paranthesis in the expression are balanced";
    }
    else {
        cout << "The Paranthesis in the expression are not balanced";
    }
    
}