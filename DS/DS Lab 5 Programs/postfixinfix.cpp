#include <iostream>
#include <algorithm>
using namespace std;
#define stacksize 20
class stack {
    int top;
    string arr[stacksize];
public:
    stack() {
        top = -1;
    }
    void push(string element) {
        if(top<stacksize) {
            arr[++top] = element;
        }
        else {
            cout << "Stack Overflow!";
        }
    }
    string pop() {
        if(top>=0) {
            return arr[top--];
        }
        else {
            cout << "Stack is full! ";
            return " ";
        }
    }
    string peek() {
        if(top>=0) {
            return arr[top];
        }
        return " ";
    }
};
string posttoinfix(string pre) {
    stack s;
    string output;
    int l = pre.length();
    for(int i=0; i<l; i++) {
        if(isalpha(pre[i]) || isdigit(pre[i])) {
            s.push(string(1,pre[i]));
        }
        else {
            string a = s.pop();
            string b = s.pop();
            string exp = '(' + b + pre[i] + a + ')';
            s.push(exp);
        }
    }
    output = s.peek();
    return output;
    
}
int main() {
    string out;
    cout << "Enter the expression to convert - ";
    cin >> out;
    cout << "The converted expression is - ";
    cout << posttoinfix(posttoinfix(out));
    
}  
