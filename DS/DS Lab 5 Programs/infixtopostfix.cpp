#include <iostream>
#include <stdio.h>
using namespace std;
#define stacksize 25
class stack {
    int top;
    char arr[stacksize];
public:
    stack() {
        top = -1;
    }
    bool isFull() {
        if(top==stacksize-1) {
            return true;
        }
        else {
            return false;
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
    void push(int x) {
        if(isFull()) {
            cout << "Stack Overflow";
        }
        else {
            arr[++top] = x;
        }
    }
    char pop() {
        if(isEmpty()) {
            cout << "Stack is Empty";
            return -1;
        }
        else {
            return arr[top--];
        }
    }
    char peek() {
        if(!isEmpty()) {
            return arr[top];
        }
        else {
            return -1;
        }
    }


};
int getprority(char s) {
    switch(s) {
        case '^':
        case '$':
            return 3;
            break;
        case '*':
        case '/':
            return 2;
            break;
        case '+':
        case '-':
            return 1;
            break;
        default:
            return 0;
    }
}
string infixtopostfix(string infix) {
    string output;
    stack s;
    infix = '('+infix+')';
    int l = infix.size();
    for(int i=0; i<l; i++) {
        if(isalpha(infix[i]) || isdigit(infix[i])) {
            output = output + infix[i];
        }
        else if(infix[i]=='(') {
            s.push(infix[i]);
        }
        else if(infix[i]== ')') {
            while(s.peek()!='(') {
                output = output + s.pop();
            }
            s.pop();
        }
        else {
            while(getprority(infix[i])<=getprority(s.peek())) {
                output = output + s.pop();
            }
            s.push(infix[i]);
        }
    }
    return output;
}
int main() {
    cout << "Enter the string";
    string kazuma;
    cin >> kazuma; 
    cout << "Infix to Postfix" << endl;
    cout << infixtopostfix(kazuma);
    
}