//Program to convert an Infix expression to an Prefix expression
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
#define STACK_SIZE 100
class Stack {
    private:
    int top;
    char arr[STACK_SIZE];
    public:
    Stack(){
        top=-1;
    }
    void push(int elem){
        if(top<STACK_SIZE){
            arr[++top]=elem;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    char pop(){
        if(top>=0)
            return arr[top--];
        return -1;
    }

    char peek(){
        if(top>=0)
            return arr[top];
        else{
            return -1;
        }
    }
   
};

int getPriority(char c){
    switch (c)
    {
    case '-':
    case '+':
        return 1;
        break;
    case '*':
    case '/':
        return 2;
        break;
    case '$':
    case '^':
        return 3;
        break;
    default:
        return 0;
        break;
    }
}
// New function defined to handle brackets
string reverse(string output){
    string reversed;
    int len=output.length();
    for(int i=len-1;i>=0;i--){
        if(output[i]=='('){
            reversed+=')';}
        else if(output[i]==')'){
            reversed+='(';}
        else
        {
            reversed+=output[i];
        }
    }
    return reversed;
}

string infixtoPrefix(string infix){
    infix="("+infix+")";
    infix=reverse(infix);
    int l=infix.size();
    string output;
    Stack s;
    for(int i=0;i<l;i++){
        if(isalpha(infix[i])||isdigit(infix[i]))
            output+=infix[i];
        else if(infix[i]=='(')
            s.push(infix[i]);
        else if(infix[i]==')'){
            while(s.peek()!='(')
                output+=s.pop();
            s.pop();
        }
        else{
            while(getPriority(infix[i])<getPriority(s.peek()))
                output+=s.pop();
            s.push(infix[i]);
        }
    }
    output=reverse(output);
    return output;
}

int main(){
    string s;
    cout<<"Enter the expression to be converted: ";
    cin>>s;
    cout << "The converted expression is: ";
    cout<<infixtoPrefix(s);
}