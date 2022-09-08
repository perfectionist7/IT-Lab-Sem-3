#include <iostream>
#include <string.h>
#include <stdio.h>
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
    string s2;
    cout << "Enter a string: ";
    cin >> s2;
    int i;
    for(i=0;i<s2.length();i++) {
        s1.push(s2[i]);
    }
    for(i=0;(i<s2.length()) && (s1.pop() == s2[i]);i++);
    if(i==s2.length()) {
        cout << "String is a palindrome";
    }
    else {
        cout << "String is not a palindrome";
    }
}
