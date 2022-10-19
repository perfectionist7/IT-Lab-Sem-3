//Program to convert a Prefix expression to an Infix expression
#include <iostream>
#include <algorithm>
using namespace std;
#define stacksize 50
class Stack{
    int top;
    string arr[100];
    public:
    Stack(){
        top=-1;
    }
    void push(string elem){
        if(top<stacksize){
            arr[++top]=elem;
        }
        else
            cout<<"Stack Overflow!";
    }

    string pop(){
        if(top>=0)
            return arr[top--];
        else {
             cout<<"Underflow!"<<endl;
             return " ";
        }
       
    }
    string peek(){
        if(top>=0)
            return arr[top];
        cout<<"Underflow!"<<endl;
    }
};

string prefixtoInfix(string pre){
    Stack s;
    string output;
    reverse(pre.begin(),pre.end());
    int l=pre.length();
    for(int i=0;i<l;i++){
        if(isdigit(pre[i])||isalpha(pre[i])){
            s.push(string(1,pre[i]));
        }
        else{
            string a=s.pop();
            string b=s.pop();
            string exp=')'+b+pre[i]+a+'(';
            s.push(exp);
        }
    }
    output=s.pop();
    //INFIX HAS BRACKETS, THEREFORE THEY, INITIALLY ARE ADDED IN REVERSE.
    reverse(output.begin(),output.end());
    return output;
}

int main(){
    string input;
    cout<<"Enter the expression to be converted" << endl;
    cin>>input;
    cout << "The converted expression is" << endl;
    cout<<prefixtoInfix(input);
}