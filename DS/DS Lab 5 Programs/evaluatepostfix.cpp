#include <iostream>
using namespace std;
#define stacksize 25
class stack {
    int top;
    int arr[stacksize];
public:
    stack() {
        top == -1;
    }
    void push(int x) {
        if(top!=stacksize-1) {
            arr[++top] = x;
        }
        else {
            cout << "Stack Overflow";
        }
    }
    int pop() {
        if(top!=-1) {
            return arr[top--];
        }
        else {
            cout << "The Stack is Empty!";
            return -1;
        }
    }
    int peek() {
        if(top!=-1) {
            return arr[top];
        }
        else {
            return -1;
        }
    }
};
int operator1(char s, int a, int b) {
    switch(s) {
        case '*':
        return a*b;
        break;
        case '/':
        return a/b;
        break;
        case '+':
        return a+b;
        break;
        case '-':
        return a-b;
        break;
        case '^':
        return a^b;
        break;
        case '$':
        return a^b;
        break;
        default:
        return 0;
    }
}
int eval(string postfix) {
    stack s;
    int l = postfix.size();
    for(int i=0; i<l; i++) {
        if(isdigit(postfix[i])) {
            s.push(postfix[i]-'0');
        }
        else {
            s.push(operator1(postfix[i],s.pop(),s.pop()));
        }
    }
    return s.peek();
}
int main() {
    string postfix;
    cout << "Enter the postfix expression";
    cin >> postfix;
    cout << "Evaluated postfix is " << endl;
    cout << eval(postfix);
}